
#include<stdio.h>
#include<stdlib.h>

// structure definition
// self-referential structure 
typedef struct stackNode { 
	int data; 					// each stackNode contains an integer 
	struct stackNode *nextPtr; 	// pointer to next node
} Node; 

// initially there are no nodes
// So that topPtr points nothing;
Node *topPtr=NULL;

// function prototypes
int isEmpty(void);
void push(int value);
int pop(void);
void printStack(void);
int size(void);

/* function main begins program execution 
 each program must include main function */
int main(void)
{ 
	int numbers[10]={2,8,3,6,1,5,4,9,0,7},sorted[10]={};
	int i,j,k,c,max=0,index=0;
	
	FILE *wPtr;
	if((wPtr=fopen("data.dat","w"))==NULL)
		printf("file could not be opened\n");
	else{
		printf("Data:\n");
		for(i=0;i<10;i++){
			fprintf(wPtr,"%d	",numbers[i]);
			fprintf(stdout,"%d	",numbers[i]);
		}
		printf("\n");
		fprintf(wPtr,"\n");
		
		for(j=0;j<10;j++){
			max=0;
			for(i=0;i<10;i++){
				if(numbers[i]>max){
					max=numbers[i];
					index=i;
					
				}
			}
			fprintf(wPtr,"Pass %d: max %d position %d\n",j,max,index);
			printf("Pass %d: max %d position %d\n",j,max,index);
			numbers[index]=0;
			push(max);	
			fprintf(wPtr,"Data\n");
			printf("Data:\n");
			for(k=0;k<10;k++){
				printf("%d	",numbers[k]);
				fprintf(wPtr,"%d	",numbers[k]);
			}
			printf("\n\n");
			fprintf(wPtr,"\n\n");
		}
		
		for(c=0;c<10;c++){
			numbers[c]=pop();
			printf("Pop %d from stack\n",numbers[c]);
			fprintf(wPtr,"Pop %d from stack\n",numbers[c]);
		}
		
		printf("Sorted Data:\n");
		fprintf(wPtr,"Sorted Data:\n");
		for(c=0;c<10;c++){
			printf("%d	",numbers[c]);
			fprintf(wPtr,"%d	",numbers[c]);
		}
		
		fclose(wPtr);		
	}
	return 0;			
} 

// return 1 if the stack is empty, 0 otherwise
int isEmpty(void)
{ 
	if (topPtr==NULL)
		return 1;
	else
		return 0;
 	
} 

// add the value at the top of the stack
void push(int value)
{
	if (isEmpty()){		// Case 1: If the stack is empty
	
		Node *newNode=malloc(sizeof(Node)); // create node;
		newNode->data=value;
		newNode->nextPtr=NULL;
		
		topPtr=newNode;
		printf("push first item %d to stack\n",value);
	}
	else { 	// Case 2: If the stack is not empty
		
		Node *newNode=malloc(sizeof(Node)); // create node;
		newNode->data=value;
		newNode->nextPtr=topPtr;
		
		topPtr=newNode;
		printf("push %d to stack\n",value);	
	}	
}

// delete the item at the top of the stack
// return the value of deleted item
int pop(void)
{
	// Local variables to iterate the stack
	Node *tempPtr=topPtr;
	int popValue;
	
	if (isEmpty()){	// Case 1: If the stack is empty
		printf("The stack is empty.\nThere is no item to delete\n");
		return -1;
	}
	else{	// Case 2: If the stack is not empty
		
		popValue=topPtr->data;
		topPtr=tempPtr->nextPtr;
		
		free(tempPtr);
		return popValue;	
	}		
}

// print the stack
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

// returns the size of the stack
int size(void)
{
	int count=0;
	Node *currentPtr=topPtr;
	
	//If the stack is empty
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





