#include<stdio.h>

struct Reading {
	
	int ReadingID;
	double dist; 
	int ang; 
	double x; 
	double y; 
};

int main(void){
	struct Reading read[10]={};
	int i;
	FILE *rPtr;
	if((rPtr=fopen("Readings.dat","rb"))==NULL)
		printf("file could not be opened\n");
	else{
		while(1){
			if(!fread(read,sizeof(struct Reading),1,rPtr))
				break;
			else{
				for(i=0;i<1;i++)
					printf("%3d %3.2lf %5d %5.2lf %5.2lf\n",read[i].ReadingID,read[i].dist,read[i].ang,read[i].x,read[i].y);
			}
			
		}
		fclose(rPtr);
	}
}
