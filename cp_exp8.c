#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
	
/*
struct Operation{
	double operand_1;																			//q1
	double operand_2;
	char *operand;
	double result;
};
int main(){
	struct Operation opt={};
	do{
	
	printf("Enter op1, op2 and operand: ");
	scanf("%lf%lf%s",&opt.operand_1,&opt.operand_2,&opt.operand);
	
	if(opt.operand=='+'){
		opt.result=opt.operand_1+opt.operand_2;
		printf("%lf + %lf = %lf\n",opt.operand_1,opt.operand_2,opt.result);
	}
	if(opt.operand=='-'){
		opt.result=opt.operand_1-opt.operand_2;
		printf("%lf - %lf = %lf\n",opt.operand_1,opt.operand_2,opt.result);
	}
	if(opt.operand=='*'){
		opt.result= opt.operand_1 * opt.operand_2;
		printf("%lf * %lf = %lf\n",opt.operand_1,opt.operand_2,opt.result);
	}
	if(opt.operand=='/'){
		opt.result= opt.operand_1 / opt.operand_2;
		printf("%lf / %lf = %lf\n",opt.operand_1,opt.operand_2,opt.result);
	}
	
	}while(opt.operand=='+'|| opt.operand=='-'|| opt.operand=='*'|| opt.operand=='/');
	printf("Thank you !\n");
}
*/


/*
struct Grade{																					//q2
	int q1;
	int q2;
	int q3;
	int mt;
	int final;
	double avg;
	char *letter;
};

int main(){
	struct Grade g={};
	printf("q1, q2, q3, midterm and final exam results: ");
	scanf("%d%d%d%d%d",&g.q1,&g.q2,&g.q3,&g.mt,&g.final);
	
	g.avg= (g.q1+g.q2+g.q3)*0.1 + g.mt * 0.25 + g.final * 0.45 ;
	
	if(g.avg>=85){
		g.letter="AA";
	}
	if(g.avg<85 && g.avg>=65){
		g.letter="BB";
	}
	if(g.avg<65 && g.avg>=45){
		g.letter="CC";
	}
	if(g.avg<45 && g.avg>=35){
		g.letter="DD";
	}
	if(g.avg<35 && g.avg>=0){
		g.letter="FF";
	}
	
	printf("Letter Grade is %s\n",g.letter);
}
*/



/*
struct Person{																					//q3
	int height;
	int weight;
	double bmi_value;
	char weight_class[20];
};

int main(void){
	srand(time(NULL));
	struct Person p[10]; int i;
	for(i=0;i<10;i++){
		p[i].height = 150 +rand()%41;
		p[i].weight = 45+ rand()%46;
		p[i].bmi_value = 0;
		strcpy(p[i].weight_class,"");
	}
	
	for(i=0;i<10;i++){
		p[i].bmi_value = (10000*p[i].weight)/ pow(p[i].height,2);
		
		if((p[i].bmi_value) < 18.5) 
			strcpy(p[i].weight_class, "Underweight");
		else if((p[i].bmi_value) <= 24.9)
			strcpy(p[i].weight_class, "Normal");
		else
			strcpy(p[i].weight_class, "Overweight");	
	}
	
	for(i=0;i<10;i++){
		printf("%d %d %lf %s\n",p[i].height,p[i].weight,p[i].bmi_value,p[i].weight_class);
	}
}
*/
