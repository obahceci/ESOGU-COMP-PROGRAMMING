 #include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////WEEK 5

/*
main(){
	int z= 'z';
	printf("%c\n",z);
	printf("%d",z);
}
*/



/*
main(){																	//INITIALIZATION AND CHAR POINTER
	//char color[]={'b','l','u','e','\0'};
	char color[] = "blue";
	printf("%s\n",color);
	
	const char *colorPtr = "blue";
	printf("%s",colorPtr);
}
*/


/*
main(){																	//SCANF WILL READ UNTIL TAB SPACE OR NEW LINE 
	char word[20];														//ONE LESS OF SIZE WILL BE STORED LAST CHARACTHER IS TERMINATING NULL
	scanf("%19s",word);
	printf("%s",word);
	}
	
*/


/*
isdigit(int c); // checks digit
isalpha(int c);	//checks alphabetic
isalnum(int c); //checks both
islower(int c); //checks lowercase
isupper(int c); //checks uppercase
tolower(int c); //returns all cases to lower
toupper(int c);	// returns all cases to upper
*/




/*
#define SIZE 100														//GETCHAR PUTCHAR STRUCTURE
main(){
	int c;
	char sentence[SIZE];
	int i,j;
	
	for(i=0 ; i<SIZE-1 && (c =getchar()) !='\n' ; i++ ){
		sentence[i]=c;
		printf("%d or %c is read\n",c,sentence[i]);
	}
	sentence[i]='\0';
	
	printf("\n");
	for(j=0;j<i;j++){
		printf(" or %d is printed\n", putchar(sentence[j]) );
	}
}
*/


/*
#define SIZE 100														//SPRINTF STRUCTURE
main(){		
	char s[SIZE];
	int x=3;
	double y=17.5;
	
	sprintf(s,"we have %d numbers and their average is %3.1lf",x,y);
	printf("%s",s);
}
*/


/*
#define SIZE 100														//SSCANF STRUCTURE
main(){
	char s[SIZE]= "3 17.5";
	int x;
	double y;
	sscanf(s,"%d%lf",&x,&y);
	printf("the values stored in s are %d and %lf",x,y);
}
*/

/*
main(){
	char chr[30];														//CHARACTER EXAMPLE
	int i,cntNum=0,cntSpe=0,cntLtr=0;
	
	for(i=0;i<30;i++){
		chr[i]=32+rand()%95;
		printf("%2c",chr[i]);
	}
	
	for(i=0;i<30;i++){
		if(isalpha(chr[i]))
			cntLtr++;
		
		if (isdigit(chr[i]))
			cntNum++;
		
		if (isalnum(chr[i])==0)
			cntSpe++;
	}
	
	printf("\n\nThere are %d numbers in the array\n",cntNum);
	printf("\n\nThere are %d letters in the array\n",cntLtr);
	printf("\n\nThere are %d special characters in the array\n",cntSpe);
}
*/


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// WEEK06


/*
int main(void){
	char x[]="Happy Birthday to You";											//STRCPY AND STRNCPY
	char y[25];
	char z[15];
	
	strcpy(y,x);
	
	strncpy(z,x,14);
	z[14]='\0';
	printf("X: %s\n",x);
	printf("Y: %s\n",y);
	printf("Z: %s\n",z);
}
*/




/*
int main(void){																	//STRCAT AND STRNCAT
	char s1[20]="Happy ";
	char s2[]="New Year ";
	char s3[40]="";
	
	printf("s1 : %s\n",s1);
	printf("s2 : %s\n",s2);
	printf("s3 : %s\n",s3);

	strcat(s1,s2);
	printf("append s2 to s1 : %s\n",s1);
	
	strncat(s3,s1,6);
	printf("append 6 characther from s1 to s3 : %s\n",s3);
	
	strcat(s3,s1);
		
	printf("s1 : %s\n",s1);
	printf("s2 : %s\n",s2);
	printf("s3 : %s\n",s3);
	
	return 0;
}
*/


/*
int main(void){
	const char *s1= "Happy New Year";
	const char *s2= "Happy New Year";
	const char *s3= "Happy Holidays";
	printf("s1: %s\ns2: %s\ns3: %s\n",s1,s2,s3);
	printf(" S1|S2 : %3d\n",strcmp(s1,s2));			//this function compares every characther between two strings in the first occurance of different character,
	printf(" S1|S3 : %3d\n",strcmp(s1,s3));			//compiler checks the characthers decimal value and substitute them if the 2 second's value is bigger than first
	printf(" S3|S1 : %3d\n",strcmp(s3,s1));			//returns 1 ,othwerway around returns -1, else returns 0 which means they are both identical
	
	printf(" S1|S3|6 : %d\n",strncmp(s1,s3,6));
	printf(" S1|S3|7 : %d\n",strncmp(s1,s3,7));
	printf(" S3|S1|7 : %d\n",strncmp(s3,s1,6));
}
*/ 



/*
int main(void){		
	const char *string="This is a test";			//STRCHR searches for first occurance of a character 
	char character1='a';							//if its found strchr returns a pointer to the character
	char character2='z';							//otherwise returns NULL
	
	if(strchr(string,character1)!=NULL)
		printf("'%c'was found in '%s'\n",character1,string);
	else 
		printf("'%c'was not found in '%s'\n",character1,string);
	
	if(strchr(string,character2)!=NULL)
		printf("'%c'was found in '%s'\n",character2,string);
	else 
		printf("'%c'was not found in '%s'\n",character2,string);
	return 0;
}
*/


/*
int main(){
	const char *string ="A zoo has many animals including zebras";			//strrchr searchs for last occurance of a character
	char c1='s';
	char c2='z';
	printf("%s\n",string);
	
	if(strchr(string,c1)!=NULL)
		printf("\n%c was found\nthe string after the first occurance of %c\n%s\n",c1,c1,strchr(string,c1));
	if(strrchr(string,c1)!=NULL)
		printf("\n%c was found\nthe string after the last occurance of %c\n%s\n",c1,c1,strrchr(string,c1));
	if(strchr(string,c2)!=NULL)
		printf("\n%c was found\nthe string after the first occurance of %c\n%s\n",c2,c2,strchr(string,c2));
	if(strrchr(string,c2)!=NULL)
		printf("\n%c was found\nthe string after the last occurance of %c\n%s\n",c2,c2,strrchr(string,c2));
	return 0;
}
*/



/*			
int main(void){																//strstr searches for another string in the first string 
	const char *string1="abcdefabcdef";
	const char *string2="def";
	
	if(strstr(string1,string2)!=NULL)
		printf("%s was found\nthe string after first occurance of %s\n%s",string2,string2,strstr(string1,string2));
}
*/


/*
int main(void){
	const char *s1="this is a test";										//strpbrk searches the first occurance of any character in the second string
	const char *s2="beware";
	const char *s3="rats";

	if(strpbrk(s1,s2)!=NULL)
		printf("A character from \"%s\" was found in \"%s\"\n",s2,s1);
		printf("\"%c\" was found\n",*strpbrk(s1,s2));
		printf("the string after first occurance \"%s\"\n",strpbrk(s1,s2));
	
		if(strpbrk(s1,s3)!=NULL)
		printf("\nA character from \"%s\" was found in \"%s\"\n",s3,s1);
		printf("\"%c\" was found\n",*strpbrk(s1,s3));
		printf("the string after first occurance \"%s\"\n",strpbrk(s1,s3));
	return 0;
}
*/


/*
int main(void){	
	const char *s1="the value is 3.14159";									//strcspn determines the length of the inital part that doesnt contain any character from second string
	const char *s2="1234567890";
	printf("length of the initial segment of \"%s\"\n",s1);
	printf("containing no characters from \"%s\" is %d\n",s2,strcspn(s1,s2));
}
*/


/*
int main(void){
	const char *s1="the value is 3.14159";									//strspn determines the length of the part that only contains characters from second string						
	const char *s2="aehi lsTuv";
	
	printf("length of the initial segment of \"%s\"\n",s1);
	printf("containing only characters from \"%s\" is %d\n",s2,strspn(s1,s2));

	return 0;
}
*/



/*

int main(void){																//MOST IMPORTANT FUNCTION 
	char string[]="this is a sentence with 7 tokens";						//STRTOK TOKINIZE THE STRING BY DELIMITNG CHARACTERS
	char *tokenPtr;

	printf("the tokens are:\n");
	tokenPtr=strtok(string," ");
	
	while(tokenPtr!=NULL){
		printf("%s\n",tokenPtr);
		tokenPtr= strtok(NULL," ");
	}
	
	return 0;
}
*/


/*
int main(void){																
	char string[]="-this, is a sample string. www.ogu.edu.tr";
	char *tokenPtr;

	printf("the tokens are:\n");
	tokenPtr=strtok(string," ,.-");
	
	while(tokenPtr!=NULL){
		printf("%s\n",tokenPtr);
		tokenPtr= strtok(NULL," ,.-");
	}
	
	return 0;
}
*/


/*
int main(void){
	const char *s1="abcdefghijklmnopqrstuvwxyz";								//strlen returns the length of the string 
	const char *s2="four";
	const char *s3="Boston";
	
	printf("length of \"%s\" is %d\n",s1,strlen(s1));
	printf("length of \"%s\" is %d\n",s2,strlen(s2));
	printf("length of \"%s\" is %d\n",s3,strlen(s3));
	
	return 0;	
}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////WEEK 07

