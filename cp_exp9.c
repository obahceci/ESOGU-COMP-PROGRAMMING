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









/*
struct Product{
	int productID;
	char production[30];
	double cost;
};

double costAnalysis (struct Product *p);

int main(void){
	struct Product prd={};
	
	printf("Enter Product ID,production and cost per product: ");
	scanf("%d%s%lf",&prd.productID,&prd.production,&prd.cost);
	
	printf("Total deformed cost of production line is : %lf \n", costAnalysis(&prd));
	
	
	return 0;
}

double costAnalysis (struct Product *p){
	
	char control ='o';
	int i=0;
	char* temp= p->production;
	
	while(temp!=NULL){
		temp=strchr(temp,control);
		if(temp){
			temp++;
			i++;
		}
			
	}
	double total=0;
	total=i*(p->cost);
	
	return total;
}
*/









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

void histogram(struct Grade *g);

int main(void){
	//srand(time(NULL));
	struct Grade array[10];
	int i;
	
	printf("\t\tQ1 \t\t Q2 \t\t Q3 \t\t MIDTERM \t\t FINAL\n\n");
	for(i=0;i<10;i++){
		array[i].q1=rand()%101;
		array[i].q2=rand()%101;
		array[i].q3=rand()%101;
		array[i].mt=rand()%101;
		array[i].final=rand()%101;
		
		printf("%d. student: %4d \t\t %3d \t\t %4d \t\t %5d \t\t %9d\n",i+1,array[i].q1,array[i].q2,array[i].q3,array[i].mt,array[i].final);
	}

	printf("\n");
	
	histogram(array);
	
	
}
void histogram(struct Grade *g){
	int i,j;
	int gradeHist[5]={};
	
	for(i=0; i<10; i++){
		
		g[i].avg= (0.1*(g[i].q1+g[i].q2+g[i].q3)) + (0.25*g[i].mt) + (0.45*g[i].final) ;
	
	
		g[i].letter = malloc(sizeof(char) * 3);					// bu satırı chat gpt yazdı
		
		if(g[i].avg>=85 && g[i].avg<=100){
			strcpy(g[i].letter,"AA");
			gradeHist[0]++;
		}
		
		else if(g[i].avg>=65 && g[i].avg<85){
			strcpy(g[i].letter,"BB");
			gradeHist[1]++;
		}
		
		else if(g[i].avg>=45 && g[i].avg<65){
			strcpy(g[i].letter,"CC");
			gradeHist[2]++;
		}
		
		else if(g[i].avg>=35 && g[i].avg<45){
			strcpy(g[i].letter,"DD");
			gradeHist[3]++;
		}
		
		else if(g[i].avg>=0 && g[i].avg<35){
			strcpy(g[i].letter,"FF");
			gradeHist[4]++;
		}
		
		
		printf("%d. student's Average: %.2lf Grade Letter: %s\n", i+1, g[i].avg, g[i].letter);
		
	}
	
	printf("Histogram of Grade Letter\n");
	printf("%d student AA\n",gradeHist[0]);
	printf("%d student BB\n",gradeHist[1]);
	printf("%d student CC\n",gradeHist[2]);
	printf("%d student DD\n",gradeHist[3]);
	printf("%d student FF\n",gradeHist[4]);
	
		
}

*/










/*
struct Color{
	int colorID;
	int r;
	int g;
	int b;
	int gray;
};

void grayScale (struct Color *pArray);

int main(void){
	struct Color clr[10]={};
	int i,j;
	for(i=0;i<10;i++){
		clr[i].colorID=i+1;
		clr[i].r=rand()%256;
		clr[i].g=rand()%256;
		clr[i].b=rand()%256;
		clr[i].gray=0;
	}
	
	printf("\n\nColorID \t\t R \t\t G \t\t B \t\t Gray \n\n");
	for(i=0;i<10;i++)
		printf("%3d \t\t %10d \t\t %2d \t\t %3d \t\t %3d\n",clr[i].colorID,clr[i].r,clr[i].g,clr[i].b,clr[i].gray);
	
	grayScale(clr);
	
	printf("\n\nColorID \t\t R \t\t G \t\t B \t\t Gray \n\n");
	for(i=0;i<10;i++)
		printf("%3d \t\t %10d \t\t %2d \t\t %3d \t\t %3d\n",clr[i].colorID,clr[i].r,clr[i].g,clr[i].b,clr[i].gray);
	
	
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){

			if(clr[j].gray > clr[j+1].gray){
				struct Color hold=clr[j];
				clr[j]=clr[j+1];
				clr[j+1]=hold;
			}
		}
	}
	printf("\nAscending order of color gray:\n");
	printf("\n\nColorID \t\t R \t\t G \t\t B \t\t Gray \n\n");
	for(i=0;i<10;i++)
		printf("%3d \t\t %10d \t\t %2d \t\t %3d \t\t %3d\n",clr[i].colorID,clr[i].r,clr[i].g,clr[i].b,clr[i].gray);
	
	
	return 0;
}
	
void grayScale (struct Color *pArray){
	int i;
	for(i=0;i<10;i++){
		pArray[i].gray= (pArray[i].r*0.299) +(pArray[i].g*0.587) + (pArray[i].b*0.114);
	}
	
}
*/
	
	


