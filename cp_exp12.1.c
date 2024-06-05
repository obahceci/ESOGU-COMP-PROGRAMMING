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
	
	if((wPtr=fopen("students.dat","w"))==NULL)
		printf("file could not be opened");
	else{
		printf("Enter number name quizes mt final and avg: \n");
		scanf("%d%s%d%d%d%d%d%lf",&student.number,&student.name,&student.q1,&student.q2,&student.q3,&student.mt,&student.final,&student.avg);
		
		while(!feof(stdin)){
			fprintf(wPtr,"%d %s %d %d %d %d %d %lf\n",student.number,student.name,student.q1,student.q2,student.q3,student.mt,student.final,student.avg);
			scanf("%d%s%d%d%d%d%d%lf",&student.number,&student.name,&student.q1,&student.q2,&student.q3,&student.mt,&student.final,&student.avg);
		}
		fclose(wPtr);
	}
	return 0;
}
