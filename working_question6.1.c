#include<stdio.h>
#include<math.h>
#include<stdlib.h>

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
	
	struct Reading read[SIZE]={};
	struct Reading sorted[SIZE*2]={};
	int i;int j;
	
	for(i=0;i<SIZE;i++){
		read[i].ReadingID=i+1;
		read[i].dist=rand()%5+2;
		read[i].ang=rand()%181;
		read[i].x=0;
		read[i].y=0;
	}
	
	FILE *wPtr,*rPtr;
	
	
	if((wPtr=fopen("readings.dat","w"))==NULL)
		printf("file could not be opened\n");
	else{
		for(i=0;i<SIZE;i++)
			fprintf(wPtr,"%d %5.2lf %5d %5.2lf %5.2lf\n",read[i].ReadingID,read[i].dist,read[i].ang,read[i].x,read[i].y);
		
		for(i=0;i<SIZE;i++){
			read[i].x = (read[i].dist) * cos(read[i].ang*PI/180);
			read[i].y = (read[i].dist) * sin(read[i].ang*PI/180);
		}
		for(i=0;i<SIZE;i++)
			fprintf(wPtr,"%d %5.2lf %5d %5.2lf %5.2lf\n",read[i].ReadingID,read[i].dist,read[i].ang,read[i].x,read[i].y);
			
		fclose(wPtr);
	}
	
	i=0;
	
	if((rPtr=fopen("readings.dat","r"))==NULL)
		printf("file could not be opened\n");
	else{
		while(!feof(rPtr)){
			
			fscanf(rPtr,"%d%lf%d%lf%lf",&sorted[i].ReadingID,&sorted[i].dist,&sorted[i].ang,&sorted[i].x,&sorted[i].y);
			i++;
		}
		fclose(rPtr);
	}
	

	for(j=0;j<SIZE*2;j++){
		for(i=0;i<SIZE*2-1;i++){
			if(sorted[i].ang > sorted[i+1].ang){
				struct Reading hold = sorted[i];
				sorted[i] = sorted[i+1];
				sorted[i+1] = hold;
			}
		}
	}
	
	printf("ID Dist   Angle    X       Y\n");
	for(i=0;i<SIZE*2;i++)
		printf("%d  %3.2lf  %5d  %5.2lf  %5.2lf\n",sorted[i].ReadingID,sorted[i].dist,sorted[i].ang,sorted[i].x,sorted[i].y);
	
	return 0;
}
