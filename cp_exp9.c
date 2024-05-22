#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

/*
struct Grade{
	int q1;
	int q2;
	int q3;
	int mt;
	int final;
	double avg;
	char *letter;
};

void average(struct Grade *p);

int main(void){
	
	struct Grade student={};
	printf("enter q1,q2,q3,mt and final grade:");
	scanf("%d%d%d%d%d",&(student.q1),&(student.q2),&(student.q3),&(student.mt),&(student.final));
	
	average(&student);
	
	if (student.avg>=85)
		student.letter="AA";
	else if (student.avg<85 && student.avg>=65)
		student.letter="BB";
	else if (student.avg<65 && student.avg>=45)
		student.letter="CC";
	else if (student.avg<45 && student.avg>=35)
		student.letter="DD";
	else if (student.avg<35 && student.avg>=0)
		student.letter="FF";

	printf("Letter Grade is %s:",student.letter);

	return 0;
}

void average(struct Grade *p){
	p->avg= 0.1*(p->q1+p->q2+p->q3) + 0.25*(p->mt) + 0.45*(p->final);
	
	printf("avg is %.2lf\n",p->avg);
}
*/


/*
struct student{
	
	char student_id[15];
	char student_name[30];
	double GPA;
}; 

void determine(struct student *s1,struct student *s2,struct student *s3); // 10 pts


int main(void)
{
	int i;
	struct student std1={},std2={},std3={};
	
	printf("Enter the first student's id, Name, and GPA respectively:"); 
    scanf("%s%s%lf",&std1.student_id, &std1.student_name, &std1.GPA); 		
	
	printf("Enter the second student's id, Name, and GPA respectively:"); 
    scanf("%s%s%lf",&std2.student_id, &std2.student_name, &std2.GPA); 		
     	
    printf("Enter the third student's id, Name, and GPA respectively:"); 
    scanf("%s%s%lf",&std3.student_id, &std3.student_name, &std3.GPA); 		
     	 	
	determine(&std1,&std2,&std3);

	return 0;
}

void determine(struct student *s1,struct student *s2,struct student*s3)	
{
    int i;
    char eee[4]="1512";
    if(strncmp(s1->student_id,eee,4)==0)
    	printf("%-12s %-30s %lf\n",s1->student_id,s1->student_name,s1->GPA);
    if(strncmp(s2->student_id,eee,4)==0)
    	printf("%-12s %-30s %lf\n",s2->student_id,s2->student_name,s2->GPA);
    if(strncmp(s3->student_id,eee,4)==0)
    	printf("%-12s %-30s %lf\n",s3->student_id,s3->student_name,s3->GPA);	
								
}
*/


