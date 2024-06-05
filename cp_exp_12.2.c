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
	struct Grade student;
	FILE *wPtr;
	FILE *rPtr;
	
	if((rPtr=fopen("students.dat","r"))==NULL)
		printf("file could not be opened\n");
	else{
		if((wPtr=fopen("students2.dat","w"))==NULL)
			printf("file could not be opened\n");
		else{
			
			fscanf(rPtr,"%d%s%d%d%d%d%d%lf",&student.number,&student.name,&student.q1,&student.q2,&student.q3,&student.mt,&student.final,&student.avg);
			
			while(!feof(rPtr)){
				printf("%d %s %d %d %d %d %d %lf\n",student.number,student.name,student.q1,student.q2,student.q3,student.mt,student.final,student.avg);
				
				if(student.number==1){
					printf("Enter number, name, 3 quiz, mt, final, avg:"); 
					scanf("%d%s%d%d%d%d%d%lf",&student.number,&student.name,&student.q1,&student.q2,&student.q3,&student.mt,&student.final,&student.avg); 
	
					fprintf(wPtr,"%d %s %d %d %d %d %d %lf\n",student.number,student.name,student.q1,student.q2,student.q3,student.mt,student.final,student.avg);	
				}
				else{
					fprintf(wPtr,"%d %s %d %d %d %d %d %lf\n",student.number,student.name,student.q1,student.q2,student.q3,student.mt,student.final,student.avg);
				}
			
				fscanf(rPtr,"%d%s%d%d%d%d%d%lf",&student.number,&student.name,&student.q1,&student.q2,&student.q3,&student.mt,&student.final,&student.avg);
			}
			fclose(wPtr);
		}
		fclose(rPtr);
	}
	return 0;
}
