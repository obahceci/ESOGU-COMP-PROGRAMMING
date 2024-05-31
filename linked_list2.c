#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct listNode{
	int data;
	struct listNode *nextPtr;


} Node ; 

Node *startPtr=NULL;

int isEmpty(void);
void push_back(int value);
void push_front(int value);
void insert(int position,int value);
void printList(void);
void pop_back(void);
void pop_front(void);
void erase(int position);
void clear(void);
int size(void);


int main(void){

	int i;
	for(i=0;i<25;i++){
		push_back(rand()%5);
	}
	printList();
	
	Node *currentPtr=startPtr;
	int freq[5]={},dummy;
	
	while(currentPtr!=NULL){
		
		dummy=currentPtr->data;
		
		switch(dummy){
			case 0:
				freq[0]++;
				break;
			case 1:
				freq[1]++;
				break;
			case 2:
				freq[2]++;
				break;
			case 3:
				freq[3]++;
				break;
			case 4:
				freq[4]++;
				break;
		}
		currentPtr=currentPtr->nextPtr;
	}
	
	clear();
	
	for(i=0;i<5;i++){
		push_back(freq[i]);
	}
	
	printList();
	
	int max=0,index=1;
	currentPtr=startPtr;
	
	for(i=0;i<size();i++){
		dummy=currentPtr->data;
		
		if(dummy>max){
			max=dummy;
			index=i;
		}
		currentPtr=currentPtr->nextPtr;
	}
	printf("Mode is %d\n",index+1);
	
	
	
	return 0;
}


int isEmpty(void){
	if(startPtr==NULL)
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
		
		while(currentPtr->nextPtr!=NULL){
			currentPtr=currentPtr->nextPtr;
		}
		
		currentPtr->nextPtr=newNode;
		printf("push back %d\n",value);
	}
}

void push_front(int value){
	Node *currentPtr;
	
	if(isEmpty()){
		Node *newNode=malloc(sizeof(Node));
		newNode->data=value;
		newNode->nextPtr=NULL;
		startPtr=newNode;
		printf("push front first item is %d\n");
	}
	else{
		currentPtr=startPtr;
		Node *newNode=malloc(sizeof(Node));
		newNode->data=value;
		newNode->nextPtr=currentPtr;
		
		startPtr=newNode;
		printf("push front %d\n",value);
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
	
	if(startPtr==NULL)
		printf("The list is empty\n");
		
	else{
		printf("The list is:\n");
		while(currentPtr!=NULL){
			printf("%3d--->",currentPtr->data);
			currentPtr=currentPtr->nextPtr;
		}
		printf("\n");
	}
}

void pop_back(void){
	Node *previousPtr=NULL;
	Node *currentPtr=startPtr;
	
	if(isEmpty())
		printf("The list is empty.\nThere is no item to delete\n");
	else{
		while(currentPtr->nextPtr!=NULL){
			previousPtr=currentPtr;
			currentPtr=currentPtr->nextPtr;
		}
		previousPtr->nextPtr=NULL;
		free(currentPtr);
		printf("Pop back is done\n");
	}
}

void pop_front(void){
	Node *currentPtr;
	
	if(isEmpty())
		printf("The list is empty.\nThere is no item to delete\n");
	else{
		currentPtr=startPtr->nextPtr;
		free(startPtr);
		startPtr=currentPtr;
		printf("pop front is done\n");
	}
}

void erase(int position){
	int count=1;
	
	Node *previousPtr=NULL;
	Node *currentPtr=startPtr;
	
	while(count<position){
		previousPtr=currentPtr;
		currentPtr=currentPtr->nextPtr;
		count++;
	}
	previousPtr->nextPtr=currentPtr->nextPtr;
	free(currentPtr);
	printf("Erased the item at position %d\n",position);
}

void clear(void){
	while(!isEmpty())
		pop_front();
}

int size(void){
	int count=0;
	Node *currentPtr=startPtr;
	
	if(startPtr==NULL)
		return 0;
	else{
		while(currentPtr!=NULL){
			currentPtr=currentPtr->nextPtr;
			count++;
		}
		return count;
	}
}



