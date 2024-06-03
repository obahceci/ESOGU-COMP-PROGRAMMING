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
	FILE *rPtr;
	int c;
	if((rPtr=fopen("std.dat","rb"))==NULL)
		printf("file could not be opened\n");
	else{
		printf("Number		Name		GPA\n");
		while(1){
			if(!fread(&std,sizeof(struct student),1,rPtr))
				break;
			else
				printf("%3d \t%12s \t %10.2lf\n",std.number,std.name,std.GPA);
		}
		fclose(rPtr);
	}
	return 0;
}

