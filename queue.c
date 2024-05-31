

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


typedef struct queueNode { 
	int data; 					
	struct queueNode *nextPtr; 	
} Node; 


Node *headPtr=NULL;
Node *tailPtr=NULL;


int isEmpty(void);
void enqueue(int value);
int dequeue(void);
void printQueue(void);
int size(void);

void wait(int seconds) {
    
	time_t start, end;
    double elapsed;
 
    time(&start);  
 	printf("Waiting %d seconds\n",seconds);
 	
    do {
		time(&end);
        elapsed = difftime(end, start);
    } while(elapsed < seconds);  
}


int main(void)
{
	int numbers[10]={2,8,3,6,1,5,4,9,0,7};
	int i,operand=3,dummy;
	
	for(i=0;i<10;i++)
		enqueue(numbers[i]);
	
	printQueue();
	
	for(i=0;i<operand;i++){
		dummy=dequeue();
		enqueue(dummy);
	}
	
	printQueue();
} 


int isEmpty(void)
{ 
	if (headPtr==NULL)
		return 1;
	else
		return 0;
 	
} 


void enqueue(int value)
{
	if (isEmpty()){		
	
		Node *newNode=malloc(sizeof(Node)); 
		newNode->data=value;
		newNode->nextPtr=NULL;
		
		headPtr=newNode;
		tailPtr=newNode;
		printf("enqueue first item %d to queue\n",value);
	}
	else { 
		
		Node *newNode=malloc(sizeof(Node)); 
		newNode->data=value;
		newNode->nextPtr=NULL;
		tailPtr->nextPtr=newNode;
		
		tailPtr=newNode;
		printf("enqueue %d to queue\n",value);	
	}	
}


int dequeue(void)
{
	
	Node *tempPtr=headPtr;
	int popValue;
	
	if (isEmpty()){	
		printf("The queue is empty.\nThere is no item to delete\n");
		return -1;
	}
	else{	
		
		popValue=headPtr->data;
		headPtr=tempPtr->nextPtr;
		
		printf("dequeue %d to queue\n",popValue);	
		free(tempPtr);
		return popValue;	
	}		
}


void printQueue(void)
{
	Node *currentPtr=headPtr;
	
	if (headPtr==NULL)
		printf("The queue is empty\n");
	else{
	
   		printf("The queue is:\n");
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
	Node *currentPtr=headPtr;
	
	
	if (headPtr==NULL)
		return 0;
	else{
	
		while(currentPtr!=NULL){
			currentPtr=currentPtr->nextPtr;
			count++;
		}
		return count;
   }
}





