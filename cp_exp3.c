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


/*
#define SIZE 10													//q2
void reverse (int *const n, int size);
main(){
	int numbers[SIZE]={3,7,10,5,4,1,6,9,2,8};
	int i;
	
	printf("Array:\n");
	for(i=0;i<SIZE;i++){
		printf("%3d",numbers[i]);
		if(i%10==9)
			printf("\n");
	}
	reverse(numbers,SIZE);
	
	printf("Reverse:\n");
	for(i=0;i<SIZE;i++)
		printf("%3d",numbers[i]);
		if(i%10==9)
			printf("\n");
	
}
void reverse (int *const n, int size){
	int j,i;
	for(j=size-1,i=0;j>=0;i++,j--){
		n[i]=n[j];
	}
}
*/


/*
#define SIZE 5
void catalan(int *const n, int size); 							//q3
main(){
	int numbers[SIZE]={1};
	int i;
	
	for(i=0;i<SIZE;i++){
		printf("%3d",numbers[i]);
	}
	printf("\n");
	
	catalan(numbers,SIZE);
	
	for(i=0;i<SIZE;i++){
		printf("%3d",numbers[i]);
	}
	
	
	

}
void catalan(int *const n, int size){
	int i;
	for(i=1;i<size;i++){
		*(n+i)=   ( 4*i-2 ) * ( *(n+i-1) )/(i+1);
	}
}
*/



/*
#define SIZE 30
int search (const int *const n, int size, int x);			//q4
main(){	
	srand(time(NULL));
	int numbers[SIZE]={};
	int i,x,result;
	for(i=0;i<SIZE;i++){
		numbers[i]=rand()%20;
	}
	
	printf("Array:\n");
	for(i=0;i<SIZE;i++){
		printf("%3d",numbers[i]);
		if(i%10==9)
			printf("\n");		
	}
	printf("Enter a number to search:");
	scanf("%d",&x);
	result=search(numbers,SIZE,x);
	if(result==1)
		printf("%d is an element of the array\n",x);
	else
		printf("%d is not an element of the array\n",x);
}

int search (const int *const n, int size, int x){
	int i=0;
	for(i=0;i<size;i++){
		if( *(n+i)==x )
			return 1;	
	}
		return 0;
}
*/



/*
#define SIZE 30
int count (const int *const n, int size);					//q5
main(){
	srand(time(NULL));
	int numbers[SIZE]={};
	int i,result;
	
	for(i=0;i<SIZE;i++){
		numbers[i]=rand()%20;
	}
	printf("Array:\n");
	for(i=0;i<SIZE;i++){
		printf("%3d",numbers[i]);
		if(i%10==9)
			printf("\n");
	}
	result=count(numbers,SIZE);
	
	printf("Number of the odd elements: %d",result);
}
int count (const int *const n, int size){
	int i,hold=0;;
	for(i=0;i<size;i++){
		if( *(n+i)%2==1 )
			hold++;
	}
	
	return hold;
}
*/


