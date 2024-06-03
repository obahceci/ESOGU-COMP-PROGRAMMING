#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


/////////////////////////////////////////////////////////////////////////WEEK 2
/*
main(){
	int x=5,*xPtr;											//pointer operators
	xPtr=&x;
	printf("x=%d and *xPtr=%d\n",x,*xPtr);
	printf("&x=%p and xPtr=%p\n",&x,xPtr);
	printf("&*xPtr=%p and *&xPtr=%p\n",&*xPtr,*&xPtr);	
}
*/





/*
void cubebyref(int *n_p);									// call by reference 
main(){
	int num=5;
	printf("num is %d\n",num);
	cubebyref(&num);
	printf("new value =%d\n",num);
}
void cubebyref(int *n_p){
	*n_p=*n_p * *n_p * *n_p;
}
*/



/*

void callbyref(int *nPtr);									// call by reference 2

int main(){
	int num=5;
	printf("num is %d \t address is %p\n",num,&num);
	
	callbyref(&num);
	printf("\nAfter function call\n");
	printf("number is %d address is %p\n",num,&num);
	
	
	
	
	return 0;
}

void callbyref(int *nPtr){
	printf("*nPtr is %d \t nPtr is %p\n",*nPtr,nPtr);
	*nPtr= *nPtr * *nPtr * *nPtr;
	printf("\nAfter execution\n");
	printf("*nPtr is %d nPtr is %p\n",*nPtr,nPtr);
}
*/




/*
void callByReference(int *aPtr,int *bPtr,int c);			// call by reference 3 
main()
{
	int a=5,b,c;
	printf("a is %d address is %p\n",a,&a);
	printf("b is %d address is %p\n",b,&b);
	printf("c is %d address is %p\n",c,&c);
	callByReference(&a,&b,c);
	printf("\nAfter function call\n");
	printf("a is %d address is %p\n",a,&a);
	printf("b is %d address is %p\n",b,&b);
	printf("c is %d address is %p\n",c,&c);
}
void callByReference(int *aPtr,int *bPtr,int c)
{
	printf("\n*aPtr is %d aPtr is %p\n",*aPtr,aPtr);
	(*bPtr)=7;
	c=(*aPtr)*(*bPtr);
	printf("c in function %d address is %p\n",c,&c);
}
*/




/*
void cubebyref(int x,int *y);								//ReferenceValue 

main(){
	int count=5,cube=0;
	printf("count is %d cube is %d\n",count,cube);
	cubebyref(count,&cube);
	printf("After function\ncount is %d cube is %d",count,cube);
}

void cubebyref(int x,int *y){
	*y= x * x * x;
}
*/


/////////////////////////////////////////////////////////////////////////WEEK 3

/*
main(){
	int v[5]={1,2,3,4,5};
	int *vPtr;
	vPtr=v;											//pointer incrementing or decrementing 
	//vPtr=&v[0]		
	int i;
	for(i=0;i<5;i++,vPtr++){						
		printf("%p\n",vPtr);
	}
}
*/



/*
#define SIZE 5										//pointer arithmetic
main()
{
	int v[SIZE]={1,11,3,7,5};
	int *vPtr,i=0,sum=0;
	vPtr=v;
	
	while(i<SIZE){
		printf("sum is %d\nvPtr=%p\n*vPtr=%d\n\n",sum,vPtr,*vPtr);
		sum=sum+(*vPtr);
		i++;
		vPtr++;
	}
}
*/



/*
#define SIZE 5										//pointer offset notation
main(){
	int v[SIZE]={1,11,3,7,5};
	int i=0,sum=0;
	
	while(i<SIZE){
		printf("sum is %d\n(v+i)=%p\n*(v+i)=%d\n\n",sum,(v+i),*(v+i));
		sum+=(*(v+i));
		i++;
	}
}
*/


/*
#define SIZE 4										//Relationship btw pointers and arrays 
main(){
	int b[SIZE]={10,20,30,40};
	int *bPtr=b;
	int i;
	
	printf("Array subscript notation\n");
	for(i=0;i<SIZE;i++){
		printf("b[%d] =%d\n",i,b[i]);
	}
	printf("\n");
	
	printf("Pointer offset notation where the pointer is the array\n");
	for(i=0;i<SIZE;i++){
		printf("*(b+%d)=%d\n",i,*(b+i));
	}
	printf("\n");
	
	printf("Pointer subscript notation\n");
	for(i=0;i<SIZE;i++){
		printf("bPtr[%d]=%d\n",i,bPtr[i]);
	}
	printf("\n");
	
	printf("Pointer offset notation\n");
	for(i=0;i<SIZE;i++){
		printf("*(bPtr+%d)=%d\n",i,*(bPtr+i));
	}
	printf("\n");
}
*/


/*
#define SIZE 10
void bubbleSort(int *array,int size);
void swap(int *element1Ptr,int *element2Ptr);		//bubble sort w/array subscription
main(){
	int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
	int i;
	printf("data items in original order\n");
	for(i=0;i<SIZE;i++){
		printf("%3d\n",a[i]);
	}
	bubbleSort(&a[0],SIZE);
	
	printf("data items in ascending order\n");
	for(i=0;i<SIZE;i++){
		printf("%3d\n",a[i]);
	}
}

void bubbleSort(int *array,int size){
	int i,j;
	for(i=0;i<size;i++)
		for(j=0;j<size-1;j++){
			if(array[j]>array[j+1])
				swap(&array[j],&array[j+1]);
		}
}

void swap(int *element1Ptr,int *element2Ptr){
	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold; 
}
*/


/*
#define SIZE 10
void bubbleSort(int *array,int size);
void swap(int *element1Ptr,int *element2Ptr);		//bubble sort with offset notation
void printArray(int *array,int size);

main(){
	int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
	int *aPtr=a;
	int i;
	
	printf("data items in original order\n");
	printArray(aPtr,SIZE);
	
	bubbleSort(aPtr,SIZE);
	printf("data items in ascending order\n");
	printArray(aPtr,SIZE);

}

void printArray(int *array,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%3d\n",*(array+i));
	}
}

void bubbleSort(int *array,int size){
	int i,j;
	for(i=0;i<size;i++)
		for(j=0;j<size-1;j++)
			if( *(array+j) > *(array+j+1) )
				swap(array+j,array+j+1);
}

void swap(int *element1Ptr,int *element2Ptr){
	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold; 
}
*/


////////////////////////////////////////////////////////////////////WEEK 4 




/*
#define SIZE 3
void printArray(int a[],int b[],int c[],int size);					//q1
void cross(int a[],int b[],int *cPtr,int size);

main(){
	int a[SIZE]={2,3,4},b[SIZE]={5,6,7},c[SIZE]={};
	int *cPtr=c;
	
	printf("Before Cross Product\n\nA \t B \t C\n");
	printArray(a,b,c,SIZE);
	
	cross(a,b,cPtr,SIZE);
	
	printf("After Cross Product\n\nA \t B \t C\n");
	printArray(a,b,c,SIZE);

}

void printArray(int a[],int b[],int c[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d \t %d \t %d\n",a[i],b[i],c[i]);
	}
}

void cross(int a[],int b[],int *cPtr,int size){
	*(cPtr)=a[1]*b[2]-a[2]*b[1];
	*(cPtr+1)=a[2]*b[0]-a[0]*b[2];
	*(cPtr+2)=a[0]*b[1]-a[1]*b[0];	
}
*/






/*
#define SIZE 20
void arithmetic (int a_0, int d, int *const n, int size);		//q2
main(){
	int a[SIZE]={};
	int *aPtr=&a[0];
	int a0;
	int d;
	int i;
	printf("A:\n");
	
	for(i=0;i<SIZE;i++){
		printf("%3d",a[i]);
		if(i%10==9)
			printf("\n");
	}
 	
	printf("\nEnter initial term and common difference: ");
 	scanf("%d%d",&a0,&d);
 	a[0]=a0;
 	
 	printf("After function call\n");
 	arithmetic(a0,d,aPtr,SIZE);
 	
	 printf("A:\n");
	for(i=0;i<SIZE;i++){
		printf("%3d",a[i]);
		if(i%10==9)
			printf("\n");
	}
	 
}
void arithmetic (int a_0, int d, int *const n, int size){
	int i;
	for(i=1;i<size;i++){
		*(n+i)=a_0+d*(i);
	}
}
*/






/*
#define SIZE 15													//q3
void bubbleSort(int *nPtr,int size);
void printArray(int *nPtr,int size);
double median(const int *original, int *med, int size);
main(){
	
	int num[SIZE]={37,24,27,35,33,32,28,16,34,36,30,21,29,22,23};
	int med[5]={};
	int *nPtr=num;
	int *mPtr=med;
	double meanValue;
	
	printf("Original Order\n");
	printArray(nPtr,SIZE);
	
	printf("Ascending Order\n");
	bubbleSort(nPtr,SIZE);
	printArray(nPtr,SIZE);
	
	meanValue=median(nPtr,mPtr,SIZE);
	
	printf("3-median Values\n");
	printArray(mPtr,5);
	
	printf("Mean Value is %.2lf\n",meanValue);	
}
void bubbleSort(int *nPtr,int size){
	int i,j;
	for(i=0;i<size;i++)
		for(j=0;j<size-1;j++)
			if(  *(nPtr+j) > *(nPtr+j+1) ){
				int hold;
				hold=*(nPtr+j);
				*(nPtr+j)=*(nPtr+j+1);
				*(nPtr+j+1)=hold;
			}

}
void printArray(int *nPtr,int size){
	int i;
	for(i=0;i<size;i++)
		printf("%3d",*(nPtr+i));
	printf("\n\n");
}

double median(const int *original, int *med, int size){
	int i,j,mean=0;
	for(i=0,j=0;i<size;i++){
		if(i%3==1){
			*(med+j)=*(original+i);
			mean+=*(med+j);
			j++;
		}
	}
	return (double)mean/(j);
}
*/





/*
#define SIZE 10													//q4

void random(int *array,int size);
void printArray(int *array,int size);
void reverse(const int *original, int *reversed, int size);
int difference(const int *original, const int *reversed, int *diff, int size);

main(){

	int numbers[SIZE]={},reversed[SIZE]={},diff[SIZE]={};
	
	random(numbers,SIZE);
	printf("NUMBERS:\n");
	printArray(numbers,SIZE);
	
	reverse(numbers,reversed,SIZE);
	printf("REVERSED:\n");
	printArray(reversed,SIZE);
	
	difference(numbers,reversed,diff,SIZE);
	printf("DIFFERENCE:\n");
	printArray(diff,SIZE);

}

void random(int *array,int size){
	srand(time(NULL));
	int upper,lower,i;
	printf("Enter Upper and Lower boundaries: ");
	scanf("%d%d",&upper,&lower);
	for(i=0;i<size;i++){
		*(array+i)=lower+rand()%(upper-lower+1);
	}
}

void printArray(int *array,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%3d",array[i]);
		if(i%10==9)
			printf("\n");
	}
}

void reverse(const int *original, int *reversed, int size){
	int i,j;
	for(i=0 , j=size-1 ; i<size , j>=0 ; i++ , j--){
		*(reversed+i) = *(original+j);
	}
}

int difference(const int *original, const int *reversed, int *diff, int size){
	int i;
	for(i=0;i<size;i++)
		*(diff+i)=*(original+i)-*(reversed+i);
}
*/

