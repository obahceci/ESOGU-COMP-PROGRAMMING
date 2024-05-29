#include<stdio.h>
#include<stdlib.h>

typedef struct listNode{
	int data;
	struct listNode *nextPtr
}	Node;

Node *startPtr=NULL;

int isEmpty(void);
void push_back(int value);
void push_front(int value);
void insert(int position,int value);
void printList(void);


int main(void){
	printList();
	push_back(5);
	printList();
	push_back(10);
	push_back(15);
	push_front(20);
	insert(4,40);
	printList();
	
	int i;
	for(i=0;i<5;i++)
		push_back(rand()%10);
	
	printList();
	
	for(i=0;i<5;i++)
		push_front(rand()%5);
	
	printList();
	
	int count=0,operand=4;
	Node *currentPtr=startPtr;
	
	while(currentPtr!=NULL){
		if(currentPtr->data==operand)
			count++;
			currentPtr=currentPtr->nextPtr;
	}
	printf("\n\nThe result is %d\n",count);
	
	int sum=0;
	currentPtr=startPtr;
	while(currentPtr!=NULL){
		sum=sum+currentPtr->data;
		currentPtr=currentPtr->nextPtr;
	}
	printf("\n\nThe sum is %d\n",sum);
	
	
	return 0;
}

int isEmpty(void){
	if (startPtr==NULL)
 		return 1;
	else
		return 0;
}

void push_back(int value){
	Node *currentPtr;
	
	if(isEmpty()){
		
		Node *newNode=malloc(sizeof(Node));
		newNode->data=value;
		newNode->nextPtr=NULL;
		startPtr=newNode;
		printf("push back first item %d\n",value);
	}
	else{
		currentPtr=startPtr;
		Node *newNode=malloc(sizeof(Node));	
		newNode->data=value;
		newNode->nextPtr=NULL;
		
		while(currentPtr->nextPtr!=NULL)
			currentPtr=currentPtr->nextPtr;
		
		currentPtr->nextPtr=newNode;
		printf("push back %d\n",value);
	}
}


void push_front(int value){


	Node *currentPtr;

	 if (isEmpty()){ // Case 1: If the list is empty

		 Node *newNode=malloc(sizeof(Node)); // create node;
 		newNode->data=value;
 		newNode->nextPtr=NULL;

 		startPtr=newNode;
		 printf("push front first item %d\n",value);
	}
 	else{ // Case 2: If the list is not empty

 		currentPtr=startPtr;

		 Node *newNode=malloc(sizeof(Node)); // create node;
 		newNode->data=value;
 		newNode->nextPtr=currentPtr;

 		startPtr=newNode;
 		printf("push front %d \n",value);
	 }
 }
 
 
 
 
void insert(int position,int value){
	int count=1;

	Node *previousPtr=NULL;
 	Node *currentPtr=startPtr;
 
 	while(count<position){
 		previousPtr=currentPtr;
 		currentPtr=currentPtr->nextPtr;
 		count++;
	}

 	Node *newNode=malloc(sizeof(Node)); 
 	newNode->data=value;
 	newNode->nextPtr=currentPtr;

	 previousPtr->nextPtr=newNode;
	 printf("insert %d to position %d\n",value,position);
}

void printList(void){
	Node *currentPtr=startPtr;

	if (startPtr==NULL)
 		printf("The list is empty\n");
 	
	 else{

		printf("The list is:\n");
		while(currentPtr!=NULL){
 			printf("%3d---->",currentPtr->data);
 			currentPtr=currentPtr->nextPtr;
 		}
	}
	printf("\n");
}

