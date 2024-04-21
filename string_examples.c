#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include<math.h>



/*
void sorter(int *length,int *distance,int size);
int main(void){
	char s[200]="This program; separates the string into words, prints the words according to their lengths in increasing order.";
	int length[20]={};int distance[20]={};
	char *token=NULL;int i=0;int j;
	
	token=strtok(s," ;,.");
	printf(" Tokens  \t\t  Length \t Distance\n");
	while(token!=NULL){
		length[i]=strlen(token);
		distance[i]=token-s;
		printf("%10s \t\t %3d \t\t %3d\n",token,length[i],distance[i]);
		token=strtok(NULL," ;,.");
		i++;
	}
	
	printf("\n\n Number: %d\n",i);
	sorter(length,distance,i);
	
	
	for(j=0;j<i;j++){
		printf("%10s \t\t %3d\n",distance[j]+s,length[j]);
		
	}
	
	return 0;
}
void sorter(int *length,int *distance,int size){
	int i,j,hold=0;
	
	for(j=0;j<size;j++){
		for(i=0;i<size-1;i++){
			if( length[i] > length[i+1] ){
				hold=length[i];
				length[i]=length[i+1];
				length[i+1]=hold;
				
				hold=distance[i];
				distance[i]=distance[i+1];
				distance[i+1]=hold;
			}
		}
	}
}
*/



/*
int passw(char word[][15],char word1[][15],int size);
void secure(char passwords[][15],int size);
int main(void){
	char s[200]="The first password is 123456, the second is A3b4+[]7, the last choice is h3#H52?a4&_5";
	char word[20][15],word1[20][15];char *token;int i=0,j,k;
	
	token=strtok(s," ,");
	while(token!=NULL){
		strcpy(word[i],token);
		printf("%s\n",word[i]);
		token=strtok(NULL," ,");
		i++;
	}
	k=passw(word,word1,20);
	printf("\nPasswords: \n");

	for(j=0;j<k;j++)
		printf("%s\n",word1[j]);
	
	secure(word1,k);
	
	return 0;
}
int passw(char word[][15],char word1[][15],int size){
	int k=0,j;
	for(j=0;j<size;j++){
			if(strcmp(word[j],"is")==0){
				strcpy(word1[k],word[j+1]);
				k++;
			}
		}
	return k;
}

void secure(char passwords[][15],int size){
	int i,j,spec,dig,low,up,grade=0;char c;
	for(i=0;i<size;i++){
		
		spec=0,dig=0,low=0,up=0;
		
		if(strlen(passwords[i])<8)
			printf("\n%s is weak password\n",passwords[i]);
		else{
			j=0;
			c= *(passwords[i]+j);
			while(c!=NULL){
				if(isupper(c)) 
					up++;
				if(islower(c)) 
					low++;
				if(isdigit(c))
				    dig++;
				if(isalnum(c)==0)
					spec++;
				
				j++;
				c= *(passwords[i]+j);
				
			}
			printf("\n%s :\nSpecial characters: %d\nLower cases: %d\nUpper cases: %d\nNumeric characters : %d\n",passwords[i],spec,low,up,dig);
			grade=up+low+dig+2*spec;
			
			if(grade<15)
				printf("%s is in medium password grade\n",passwords[i]);
			else
				printf("%s is in strong password grade\n",passwords[i]);
				
		}
	}
}
*/


/*
void generate(char *original, const int size);
void getPrediction (char *pred, const int size);
int evaluate (const char *original, const char *pred, const int size);
int main(void){
	char chosen[5],prediction[5];int i=0;int result;
	
	generate(chosen,5);
	printf("Generated word: %s\n\n",chosen);
	
	do{
		getPrediction(prediction,5);
		i++;
	
		
		
	}while(evaluate(chosen,prediction,5)!=1);
	
	printf("Number of steps: %d\n",i);
	return 0;
}


void generate(char *original, const int size){
	int i=0,num;
	
	do{
		num=97+rand()%26;
		if(strchr(original,num)==NULL){
			original[i]=num;
			i++;
		}
	}while(i!=size-1);
	
	original[size-1]='\0';
}


void getPrediction (char *pred, const int size){
	char word;
	printf("Enter the prediction: ");
	scanf("%4s",pred);
	
	
	pred[size-1]='\0';
	
}


int evaluate (const char *original, const char *pred, const int size){
	int i,correct=0,incorrect=0,position=-1;
	
	if(strcmp(original,pred)==0){
		printf("Congrats! you have guessed correctly.\n");
		return 1;
}
	else{
		
		for(i=0;i<size-1;i++){
			if(strchr(original,pred[i])!=NULL){
				position=strchr(original,pred[i])-original;
				
				if(position==i)
					correct++;
				else
					incorrect++;
			}
		}
		printf("%d correct and %d incorrect\n\n",correct,incorrect);
		return 0;
	}
}
*/





