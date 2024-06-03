#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>



/*
int main(void){
	
	int number;
	char name[30];												//writing an existing file or creating one
	double GPA;													//discards the content if exists one 
	
	FILE *wPtr;
	if((wPtr=fopen("student.txt","w"))==NULL){
		printf("File could not be opened\n");
	}
	else{
		printf("ENTER NUMBER NAME AND GPA: ");
		scanf("%d%s%lf",&number,&name,&GPA);
		
		while(!feof(stdin)){
			fprintf(wPtr,"%d %s %4.2lf\n",number,name,GPA);
			fprintf(stdout,"%d %s %4.2lf\n",number,name,GPA),
			
				printf("ENTER NUMBER NAME AND GPA: ");
				scanf("%d%s%lf",&number,&name,&GPA);	
		}
		fclose(wPtr);
	}
	return 0;
}
*/

/*
int main(void){
	
	int number;
	char name[30];												//appending an existing file 
	double GPA;													//adds up to the end of the file
	
	FILE *aPtr;
	if((aPtr=fopen("student.txt","a"))==NULL){
		printf("File could not be opened\n");
	}
	else{
		printf("ENTER NUMBER NAME AND GPA: ");
		scanf("%d%s%lf",&number,&name,&GPA);
		
		while(!feof(stdin)){
			fprintf(aPtr,"%d %s %4.2lf\n",number,name,GPA);
			fprintf(stdout,"%d %s %4.2lf\n",number,name,GPA),
			
				printf("ENTER NUMBER NAME AND GPA: ");
				scanf("%d%s%lf",&number,&name,&GPA);	
		}
		fclose(aPtr);
	}
	return 0;
}
*/

/*
int main(void){
	
	int number;
	char name[30];											//reading a file 
	double GPA;													
	
	FILE *rPtr;
	if((rPtr=fopen("student.txt","r"))==NULL){
		printf("File could not be opened\n");
	}
	else{
		printf("NUMBER    NAME     GPA\n");
		fscanf(rPtr,"%d%s%lf",&number,&name,&GPA);
		
		while(!feof(rPtr)){
			printf("%6d%8s%10.2lf\n",number,name,GPA);
			fscanf(rPtr,"%d%slf",&number,&name,&GPA),
			
				printf("NUMBER    NAME     GPA\n");
				scanf("%d%s%lf",&number,&name,&GPA);	
		}
		fclose(rPtr);
	}
	return 0;
}
*/



/*
int main(void){
	int number;
	char name[30];
	double GPA;
	int  choose;
	
	FILE *wPtr;
	
	if((wPtr=fopen("student.txt","r"))==NULL){
		printf("file could not be opened\n'");
	}
	else{
		do{
			printf("************************************\n");
			printf("1 - Print students with GPA < 2.00\n");
			printf("2 - Print students with 2.00<= GPA <3.00 \n");
			printf("3 - Print students with GPA >= 3.00\n"),
			printf("4 - Quit\n");
			printf("************************************\n");
			
			scanf("%d",&choose);
			
			switch(choose){
				
				case 1:printf("\\nNumber	Name	GPA\n");
					while(!feof(wPtr)){
						if(GPA<2.00)
							printf("%6d%8s%10lf\n",number,name,GPA);
						fscanf(wPtr,"%d%s%lf",&number,&name,&GPA);
					}
					printf("\n\n");
				break;
				
				case 2:printf("\\nNumber	Name	GPA\n");
					while(!feof(wPtr)){
						if(GPA>=2.00 && GPA<3.00)
							printf("%6d%8s%10lf\n",number,name,GPA);
						fscanf(wPtr,"%d%s%lf",&number,&name,&GPA);
					}
					printf("\n\n");
				break;
				
				case 3:printf("\\nNumber	Name	GPA\n");
					while(!feof(wPtr)){
						if(GPA>=3.00)
							printf("%6d%8s%10lf\n",number,name,GPA);
						fscanf(wPtr,"%d%s%lf",&number,&name,&GPA);
					}
					printf("\n\n");
				break;
			
				case 4:
					printf("Ending Program\n\n");
					break;
			}
			rewind(wPtr);												//relocate the pointer at the beginning of the file
			
		}while(choose!=4);
		
		fclose(wPtr);
	}
	
	return 0;
}
*/


