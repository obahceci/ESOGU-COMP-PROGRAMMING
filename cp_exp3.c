#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


/*
#define SIZE 10
void random(int *n,int upper,int lower,int size);					//q1
void printArray(int *n,int size);
int largest (const int *n, int size);
main(){
	int numbers[SIZE]={};
	int upper=9,lower=0;
	int largestNumber;
	random(numbers,upper,lower,SIZE);
	
	printf("Generated Array:\n");
	printArray(numbers,SIZE);
	
	largestNumber=largest(numbers,SIZE);
	printf("Largest number is %d\n",largestNumber);
	
	
}
void random(int *n,int upper,int lower,int size){
	srand(time(NULL));
	int i;
	for(i=0;i<size;i++)
		*(n+i)=rand()%10;
}
void printArray(int *n,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%3d", *(n+i) );
		if(i%10==9)
			printf("\n");
	}
}
int largest (const int *n, int size){
	int i,hold=*n;
	for(i=0;i<size;i++){
		if(hold < *(n+i))
			hold=*(n+i);
	}
	return hold;
}
*/



