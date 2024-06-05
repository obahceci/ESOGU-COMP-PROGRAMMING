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
	
	if((rPtr=fopen("students3.dat","rb+"))==NULL)
		printf("File could not be opened\n");
	else{
		printf("enter number to update student: ");
		scanf("%d",&student.number);
		
		printf("enter name quizes mt final and avg:\n");
		scanf("%s%d%d%d%d%d%lf",&student.name,&student.q1,&student.q2,&student.q3,&student.mt,&student.final,&student.avg);
		
		fseek(rPtr,(student.number-1)*sizeof(struct Grade),SEEK_SET);
		fwrite(&student,sizeof(struct Grade),1,rPtr);
		
		fclose(rPtr);
	}
	return 0;
}
