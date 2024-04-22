#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/*
#define SIZE 30
int count(const int *const array, const int size, const int operand);					//q1
int main(void){
	int numbers[SIZE];int sorted[SIZE];int i;int j;int hold=0;int operand;int result;
	
	printf("Original Order:\n");
	for(i=0;i<SIZE;i++){
		*(numbers+i)=rand()%10;
		*(sorted+i)=*(numbers+i);
		printf("%2d",*(numbers+i));
		if(i%SIZE==29)
			printf("\n");
	}
	
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE-1;j++){
			if( *(sorted+j) > *(sorted+j+1) ){
				hold= *(sorted+j);
				*(sorted+j)= *(sorted+j+1);
				*(sorted+j+1)=hold;
			}
		}
	
	printf("Ascenging Order:\n");
	for(i=0;i<SIZE;i++){
		printf("%2d",*(sorted+i));
		if(i%SIZE==29)
			printf("\n");
	}
	
	operand=rand()%10;
	result=	count(numbers,SIZE,operand);
	printf("\nOperand : %d\nResult : %d\n",operand,result);
	
	
	return 0;
}
int count(const int *const array, const int size, const int operand){
	int i;int j=0;
	
	for(i=0;i<size;i++){
		if( *(array+i)==operand)
			j++;
	}
	return j;
}
*/

/*
#define SIZE 30
void selectionSort(char *array,const int size);
int main(void){
	int num[SIZE];int sorted[SIZE];int i;
	
	printf("Original Order:\n");
	for(i=0;i<SIZE;i++){
		*(num+i)= rand()%10;
		*(sorted+i)=*(num+i);
		printf("%2d",*(num+i));
		if(i%SIZE==29)
			printf("\n");
	}
	
	selectionSort(&sorted[0],SIZE);
	
	printf("Descending Order:\n");
	for(i=0;i<SIZE;i++){
		printf("%2d",*(sorted+i));
	}
	
	
	
	
	return 0;
}
void selectionSort(char *array,const int size){
	int i;int j;int hold=0;
	
	for(j=0;j<size;j++)
		for(i=0;i<size-1;i++){
			if(*(array+i) < *(array+i+1)){
				hold= *(array+i);
				*(array+i)= *(array+i+1);
				*(array+i+1)=hold;
				
			}
		}
}	
*/



/*
void selectionSort(int *a, int size);

int main(void){
	int numbers[10]; 
	int i; 
	for(i=0;i<10;i++)
		*(numbers+i)=rand()%10;
	printf("Numbers\n");
	for(i=0;i<10;i++)
		printf("%3d",*(numbers+i));
	printf("\n");

	selectionSort(numbers,10);

	printf("Sorted\n");
	for(i=0;i<10;i++)
		printf("%3d",*(numbers+i));
	return 0; 
}

void selectionSort(int *a, int size){
	int i; 
	int j; 
	int iMax; 
	int hold; 
	
	for(i=0;i<size-1;i++){
		iMax = i;
		for(j=i+1;j<size-1;j++) {
			if (*(a+j) > *(a+iMax)) {
				iMax = j;
			}
		}
		if ( iMax != i ) {
			hold=*(a+i);
			*(a+i)=*(a+iMax);
			*(a+iMax)=hold;
		}
	}
}
*/


/*
int main(void){
	char c[41];int i;int j=0;
	
	printf("String:\n");
	for(i=0;i<40;i++){
		c[i]= 33+rand()%94;
		printf("%c ",c[i]);
	}
	printf("\n");

	for(i=0;i<40;i++){
		if(isalnum(c[i])==0){
			j++;
		}
	}
	printf("Number of special characters is %d\n",j);
}
*/

/*
int main(void){
	char s1[200]="A carefully reasoned, ordered sentence tells it clearly";
	char word[10];char *token;int i=0;
	
	printf("%s",s1);
		
	token=strtok(s1," ,");
	printf("\n\n");
	printf("The word created by the first letter of each word: ");
	while(token!=NULL){
		word[i]= *(token);
		printf("%c",word[i]);
		i++;
		token=strtok(NULL," ,");
	}
	return 0;
}
*/

/*
int main(void){
	char s1[100]="This is a test sentence Eskisehir is a beautiful city in Turkey";
	printf("%s\n",s1);char *token;
	token=strtok(s1,"i");
	while(token!=NULL){
		printf("%s\n",token);
		token=strtok(NULL,"i");
	}
	return 0;
}
*/







