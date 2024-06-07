#include<stdio.h>
#include<math.h>

#define SIZE 10
#define PI 3.14159265359

struct Reading {
	
	int ReadingID;
	double dist; 
	int ang; 
	double x; 
	double y; 
};

int main(void){
	struct Reading read[SIZE],sorted[SIZE*2]={};
	int i;
	for(i=0;i<SIZE;i++){
		read[i].ReadingID=i+1;
		read[i].dist=2+rand()%5;
		read[i].ang=rand()%181;
		read[i].x=0;
		read[i].y=0;
	}
	
	FILE *wPtr;
	if((wPtr=fopen("Readings.dat","wb"))==NULL)
		printf("file could not be opened\n");
	else{
		fwrite(&read[0],sizeof(struct Reading),10,wPtr);
		
		for(i=0;i<SIZE;i++){
			read[i].x=read[i].dist*cos(read[i].ang*PI/180);
			read[i].y=read[i].dist*sin(read[i].ang*PI/180);	
		}
		
		i=0;
		fseek(wPtr,(read[i].ReadingID-1)*sizeof(struct Reading),SEEK_CUR);
		fwrite(&read[0],sizeof(struct Reading),10,wPtr);
		
	fclose(wPtr);
	}
	return 0;
}
