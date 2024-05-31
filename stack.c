

#include<stdio.h>
#include<stdlib.h>


typedef struct stackNode { 
	int data; 					
	struct stackNode *nextPtr; 	
} Node; 


Node *topPtr=NULL;


int isEmpty(void);
void push(int value);
int pop(void);
void printStack(void);
int size(void);


int main(void)
{ 
	int numbers[10]={2,8,3,6,1,5,4,9,0,7};
	int i;
	
	for(i=0;i<10;i++){
		push(numbers[i]);
	}
	printStack();
	
	for(i=0;i<10;i++){
		numbers[i]=pop();
	}
	for(i=0;i<10;i++){
		printf("%3d",numbers[i]);
	}
			
} 


int isEmpty(void)
{ 
	if (topPtr==NULL)
		return 1;
	else
		return 0;
 	
} 


void push(int value)
{
	if (isEmpty()){		
	
		Node *newNode=malloc(sizeof(Node));
		newNode->data=value;
		newNode->nextPtr=NULL;
		
		topPtr=newNode;
		printf("push first item %d to stack\n",value);
	}
	else { 	
		
		Node *newNode=malloc(sizeof(Node)); 
		newNode->data=value;
		newNode->nextPtr=topPtr;
		
		topPtr=newNode;
		printf("push %d to stack\n",value);	
	}	
}


int pop(void)
{
	
	Node *tempPtr=topPtr;
	int popValue;
	
	if (isEmpty()){	
		printf("The stack is empty.\nThere is no item to delete\n");
		return -1;
	}
	else{	
		
		popValue=topPtr->data;
		topPtr=tempPtr->nextPtr;
		
		free(tempPtr);
		return popValue;	
	}		
}


void printStack(void)
{
	Node *currentPtr=topPtr;
	
	if (topPtr==NULL)
		printf("The stack is empty\n");
	else{
	
   		printf("The stack is:\n");
		while(currentPtr!=NULL){
			printf("  <----%d",currentPtr->data);
			currentPtr=currentPtr->nextPtr;
		}
		printf("\n");
   }
} 


int size(void)
{
	int count=0;
	Node *currentPtr=topPtr;
	

	if (topPtr==NULL)
		return 0;
	else{
	
		while(currentPtr!=NULL){
			currentPtr=currentPtr->nextPtr;
			count++;
		}
		return count;
   }
}





