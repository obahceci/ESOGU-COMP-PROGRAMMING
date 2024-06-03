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
	
	if((wPtr=fopen("std.dat","wb"))==NULL)
		printf("File could not be opened\n");
	else{
		for(i=1;i<=5;i++){
			fwrite(&std,sizeof(struct student),1,wPtr);
		}
		printf("Enter a number between 1 and 5 or 0 to stop: ");
		scanf("%d",&std.number);
		while(std.number!=0){
			printf("Enter name and GPA: ");
			scanf("%s%lf",&std.name,&std.GPA);
			
			fseek(wPtr,(std.number-1)*sizeof(struct student),SEEK_SET);					// SEEK_SET, SEEK_CUR, SEEK_END
			fwrite(&std,sizeof(struct student),1,wPtr);
			
			printf("Enter a number between 1 and 5 or 0 to stop: ");
			scanf("%d",&std.number);
		}
		fclose(wPtr);
	}
	return 0;
}

