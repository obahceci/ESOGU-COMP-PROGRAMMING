#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

/*
void reverse(const char *original, char *reversed, const int size);							//q1
void clear(char *array, const int size);
int main(void){
	
	char s1[1000]="The car was quite pleasing to the eye. Dad thinks it is a real cool, but Mom does not much care for the idea. Then mom and dad decided to buy the car.";
	char *token;int i=0;char word[20]={};
	
	printf("%s\n",s1);
	
	token=strtok(s1," ,.");
	printf("Words:\n\n");
	
	while(token!=NULL){
		printf("%s\n",token);
		reverse(token,word,strlen(token));
		if(strcmp(token,word)==0){
			printf("%s is palindrome word\n",token);
			i++;
		}
		clear(word,strlen(word));
		token=strtok(NULL," ,.");
	}	
	return 0;
}
void reverse(const char *original, char *reversed, const int size){
	int i;
	for(i=0;i<size;i++){
		reversed[i]=original[strlen(original)-i-1];
	}
}
void clear(char *array, const int size){
	int i;
	for(i=0;i<size;i++)
		array[i]=NULL;
}
*/




/*
int maxLength (const char *original);										//Q2
void calculateHistogram(const char *original, int *h);
void plotHistogram(const int *h, const int s);


int main(void){
	char s1[1000]="The car was quite pleasing to the eye. Dad thinks it is a real cool, but Mom does not much care for the idea. Then mom and dad decided to buy the car.";
	int maxL;int size;int i;
	printf("%s\n",s1);
	
	maxL=maxLength(s1);
	printf("\nMax length is %d\n",maxL);
	size=maxL+1;
	int hist[size];
	
	for(i=0;i<size;i++){
		hist[i]=0;
		printf("hist[%d] = %d\n",i,hist[i]);
	}
	
	
	calculateHistogram(s1,hist);
	plotHistogram(hist,size);
}


int maxLength (const char *original){
	char copy[1000];char *token;int length;

	strcpy(copy,original);
	token=strtok(copy," ,.");
	length=strlen(token);
	
	while(token!=NULL){
		if(	strlen(token)>length )	
			length=strlen(token);
		token=strtok(NULL," ,.");
	}
	
		
	return length;
}

void calculateHistogram(const char *original, int *h){
	char copy[1000];char *token;int i;
	
	strcpy(copy,original);
	token=strtok(copy," ,.");
	while(token!=NULL){
		h[strlen(token)]++;
		token=strtok(NULL," ,.");
	}
}
void plotHistogram(const int *h, const int s){
	int i,j;
	printf("Word Length \t\t Frequency \t Histogram\n");
	
	for(i=1;i<=s;i++){
		printf("%11d \t\t %9d \t",i,h[i]);
		for(j=1;j<=h[i];j++)
			printf("*");
		printf("\n");
	}
}
*/



/*
int word_length(char word[][10], char word1[][10],int size);					//q3
void sorter(char array[][10],int size);

int main(void){
	char s1[200]="Ahmet, Mehmet, and Kemal are very good friends. They go to the same school since 5th grade";
	char word[20][10];char word1[20][10];char *token;int i=0,j;int result=0;
	printf("%s\n\n",s1);
	
	token=strtok(s1," ,.");
	while(token!=NULL){
		strcpy(word[i],token);
		token=strtok(NULL," ,.");
		i++;
	}
	
	printf("There are %d words in the string\n",i);
	for(j=0;j<i;j++)
		printf("%s\n",word[j]);

	result=word_length(word,word1,20);
	printf("\n%d words are greater than 3\n",result);
	for(i=0;i<result;i++){
		printf("%s\n",word1[i]);
		if(i%result==10)
			printf("\n");
	}
	
	sorter(word1,result);
	printf("\nWords are sorted in descending order wrt their 3rd character\n");
	for(i=0;i<result;i++)
		printf("%s\n",word1[i]);

	return 0;
}

int word_length(char word[][10], char word1[][10],int size){
	int i;int j=0;

	for(i=0;i<size;i++)
		if( strlen(word[i]) > 3 ){
			strcpy(word1[j],word[i]);
			j++;
		}
		
	return j;		
}

void sorter(char array[][10],int size){
	char hold[1][10];int i,j;
	
	for(i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if( *(array[j+1]+2) > *(array[j]+2) ){
				strcpy(hold,array[j+1]);
				strcpy(array[j+1],array[j]);
				strcpy(array[j],hold);
			}	
		}
	}
}
*/


