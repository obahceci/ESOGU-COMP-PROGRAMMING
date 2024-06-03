#include<stdio.h>
#include<stdlib.h>
#include<math.h>


struct student{
	int number;
	char name[30];
	double GPA;
};

int main(void){
	
	struct student std={0,"",0.0};
	int i;
	FILE *wPtr;
	
	if((wPtr=fopen("std.dat","rb+"))==NULL)
		printf("file could not be opened\n");
	else{
		printf("Enter number between 1 to 5 or 0 to stop: ");
		scanf("%d",&std.number);
		
		while(std.number!=0){
			
			fseek(wPtr,(std.number-1)*sizeof(struct student),SEEK_SET);
			std.number=0;
			strcpy(std.name,"");
			std.GPA=0.0;
			
			printf("Enter name and GPA\n"); 
			scanf("%s%lf",&std.name,&std.GPA);
			
			fwrite(wPtr,sizeof(struct student),1,wPtr);
			
			printf("Enter number of student between 1 to 5, and 0 to stop \n"); 
			scanf("%d",&std.number);
		}
		fclose(wPtr);
	}
	return 0;
}
