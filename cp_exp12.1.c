#include <stdio.h>


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
	
	struct Grade point;
	FILE *wPtr;
	
	if((wPtr=fopen("students.txt","w"))==NULL)
		printf("file could not be opened\n");
	else{
		printf("enter number,name,q1,q2,q3,mt,final and avg :\n");
		scanf("%d%s%d%d%d%d%d%lf",&point.number,&point.name,&point.q1,&point.q2,&point.q3,&point.mt,&point.final,&point.avg);
		
		while(!feof(stdin)){
			fprintf(wPtr,"%d %s %d %d %d %d %d %lf\n",point.number,point.name,point.q1,point.q2,point.q3,point.mt,point.final,point.avg);
			scanf("%d%s%d%d%d%d%d%lf",&point.number,&point.name,&point.q1,&point.q2,&point.q3,&point.mt,&point.final,&point.avg);
		}
		
		fclose(wPtr);
	}
	return 0;
}


