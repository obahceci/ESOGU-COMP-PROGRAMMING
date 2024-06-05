#include<stdio.h>

struct Grade {
	int number;
	char name[30];
	int q1;
	int q2;
	int q3;
	int mt;
	int final;
	double avg;
};

int main(void){
	
	struct Grade student={0,"",0,0,0,0,0,0.0};
	FILE *rPtr;	
	
	if((rPtr=fopen("students3.dat","rb"))==NULL)
		printf("file could not be opened\n");
	
	else{
		printf("NUMBER NAME\n");
		
		while(1){
			if(!fread(&student,sizeof(struct Grade),1,rPtr))
				break;
			else
				printf("%d %6s %3d %3d %3d %3d %3d %5.2lf\n",student.number,student.name,student.q1,student.q2,student.q3,student.mt,student.final,student.avg);
				
		}
		fclose(rPtr);
	}
	return 0;
}
