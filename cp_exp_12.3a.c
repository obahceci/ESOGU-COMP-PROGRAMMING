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
	int i;
	FILE *wPtr;
	
	if((wPtr=fopen("students.dat","wb"))==NULL)
		printf("file could not be opened\n");
	else{
		for(i=0;i<5;i++)
			fwrite(&student,sizeof(struct Grade),1,wPtr);
			
		printf("enter a number from 1 to 5 or 0 to stop:\n");
		scanf("%d",&student.number);
		
		while(student.number!=0){
			
			printf("enter name quizes nt final and avg:\n");
			scanf("%s%d%d%d%d%d%lf",&student.name,&student.q1,&student.q2,&student.q3,&student.mt,&student.final,&student.avg);
			
			fseek(wPtr,(student.number-1)*sizeof(struct Grade),SEEK_SET);
			fwrite(&student,sizeof(struct Grade),1,wPtr);
			
			printf("enter a number from 1 to 5 or 0 to stop:\n");
			scanf("%d",&student.number);
		}
		fclose(wPtr);
	}
	return 0;
}
