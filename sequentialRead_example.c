#include <stdio.h>
#include <math.h>
#include<stdlib.h>


#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void)
{
	double dist,ang,X,Y; 
	int i,readingID;
	FILE *wfPtr; 

	if ((wfPtr=fopen("readings.txt","r"))==NULL)
		printf("File could not be opened\n");
	else{
		for(i=0;i<10;i++){
			readingID=i+1;
			dist=4;
			ang=rand()%181; 
			X=dist*cos(ang*PI/180);
			Y=dist*sin(ang*PI/180);

			fprintf(wfPtr,"%d %4.2lf %4.2lf %4.2lf %4.2lf\n",readingID,dist,ang,X,Y);
			fprintf(stdout,"%d %4.2lf %4.2lf %4.2lf %4.2lf\n",readingID,dist,ang,X,Y);
		}
		fclose(wfPtr); 
	}
	return 0; 
}
