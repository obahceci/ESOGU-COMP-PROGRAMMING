#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<time.h>

/*
void reverse(const char *original, char *reversed, const int size);
void clear(char *array, const int size);

int main(void){
	char s1[1000]="The car was quite pleasing to the eye. Dad thinks it is a real cool, but Mom does not much care for the idea. Then mom and dad decided to buy the car.";
	char word[20]={};
	char *token=NULL;
	int i=0;
	printf("%s\n",s1);
	
	token=strtok(s1," .,");
	
	printf("\nTokens:\n\n");
	while(token!=NULL){
		printf("%s\n",token);
		reverse(token,word,strlen(token));
		
		if(strcmp(token,word)==0){
			printf("---->%s is Palindrome word\n",token);
			i++;
	    }
		clear(word,20);
		token=strtok(NULL," .,");
	}
	return 0;
}
void reverse(const char *original, char *reversed, const int size){
	int i;
	for(i=0;i<size;i++)
		reversed[i]=original[strlen(original)-i-1];
}

void clear(char *array, const int size){
	int i;
	for(i=0;i<size;i++)
		array[i]=0;
}
*/

/*
int maxLength (const char *original);

int main(void){
	char s1[1000]="The car was quite pleasing to the eye. Dad thinks it is a real cool, but Mom does not much care for the idea. Then mom and dad decided to buy the car.";
	char *token;
	int maxL;
	int i;
	
	printf("%s\n",s1);
	
	token=strtok(s1," .,");

	while(token!=NULL){
		maxL=maxLength(token);
		
		token=strtok(NULL," .,");
	}
	
	int hist[1];
}
int maxLength (const char *original){
	return strlen(original);
}
*/

