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
	
	struct Reading read[SIZE];
	int i;
	
	for(i=0;i<SIZE;i++){
		read[i].ReadingID=i+1;
		read[i].dist= rand()%5+2;
		read[i].ang=rand()%181;
		read[i].x=0;
		read[i].y=0;
	}
	
	FILE *wfPtr;
	
	if((wfPtr=fopen("example2.dat","wb"))==NULL)
		printf("File could not be opened\n");
	else{
		for(i=0;i<SIZE;i++){
			fwrite(&read[i],sizeof(struct Reading),1,wfPtr);	
		}
	
		//fwrite(&read[0],sizeof(struct Reading),10,wfPtr);
		fclose(wfPtr);
	}
		for(i=0;i<SIZE;i++){
			read[i].x=read[i].dist * cos(read[i].ang*PI/180);
			read[i].y=read[i].dist * sin(read[i].ang*PI/180);
		}
		
		
		if((wfPtr=fopen("example2.dat","ab"))==NULL)
			printf("File could not be opened\n");
		else{
			for(i=0;i<SIZE;i++){
				fwrite(&read[i],sizeof(struct Reading),1,wfPtr);	
			}
			fclose(wfPtr);
		}
		
		struct Reading sorted[SIZE*2];
			
		FILE *rfPtr;
		i=0;
		
		if((rfPtr=fopen("example2.dat","rb"))==NULL)
			printf("File could not be opened\n");
		else{
			while(1){
				if(!fread(&sorted[i],sizeof(struct Reading),1,rfPtr))
					break;
				else
					i++;
			}
			fclose(rfPtr);	
		}
		
		int pass;
		
		for(pass=0;pass<SIZE*2-1;pass++){
			for(i=0;i<SIZE*2-1;i++){
				if(sorted[i].ang>sorted[i+1].ang){
					struct Reading hold=sorted[i];
					sorted[i]=sorted[i+1];
					sorted[i+1]=hold;
				}
			}
		}	
		
			
	if((wfPtr=fopen("example2_seq.dat","w"))==NULL)
		printf("File could not be opened\n");
	else{
		for(i=0;i<SIZE*2;i++){
			printf("%7d %5.2lf %5d %5.2lf %5.2lf\n",sorted[i].ReadingID,sorted[i].dist,sorted[i].ang,sorted[i].x,sorted[i].y);
			fprintf(wfPtr,"%7d %5.2lf %5d %5.2lf %5.2lf\n",sorted[i].ReadingID,sorted[i].dist,sorted[i].ang,sorted[i].x,sorted[i].y);
		}
		
		fclose(wfPtr);
	}
		
		
	
	
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

