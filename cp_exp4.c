#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>


/*
main(){				
	int c[28]={'1','5','1','2','2','0','2','1','2','1','6','4','\n','O','g','u','z','h','a','n',' ','B','a','h','c','e','c','i'};
	int i;
	for(i=0;i<28;i++){
		printf("%2c",c[i]);														//q1
	}
	printf("\n");
	for(i=0;i<28;i++){
		printf("%4d",c[i]);
	}
	
}
*/

/*
int main(void)
{
	char c[25]={49,53,49,50,50,48,48,51,50,48,51,55,32,66,117,114,97,107,32,75,97,108,101,99,105};
	
	int i=0;
																				
	for(i=0;i<25;i++)															//q2
		printf("%4c",c[i]);
	printf("\n");

	for(i=0;i<25;i++)
		printf("%4d",c[i]);
	printf("\n");

	return 0;  
} 
*/

/*
#define SIZE 11																	//q3
int main(void){
	char c[SIZE];
	int i;
	for(i=0;i<SIZE-1;i++){
		c[i]=33+rand()%94;
	}
	c[i]='\0';
	printf("Password is %s\n",c);
}
*/


/*
int main(void){																	//q4
	char c[50],digits[50],upper[50],lower[50],specials[50];
	int i,j=0,k=0,l=0,m=0;
	
	for(i=0;i<50;i++)
		c[i]=33+rand()%94;
	c[i]='\0';
	
	printf("%3s\n",c);	
	
	for(i=0;i<50;i++){
		if(isdigit(c[i])){
			digits[j]=c[i];
			j++;
		}
		digits[j]='\0';
		if(islower(c[i])){
			lower[k]=c[i];
			k++;
		}
		lower[k]='\0';
		if(isupper(c[i])){
			upper[l]=c[i];
			l++;
		}
		upper[l]='\0';
		if(isalnum(c[i])==0){
			specials[m]=c[i];
			m++;
		}
		specials[m]='\0';	
	}
	printf("\nDigits : %4s\n",digits);
	printf("Lowercases: %4s\n",lower);
	printf("Uppercases: %4s\n",upper);
	printf("Special Characters: %4s\n",specials);

	return 0;
}
*/

/*
void initConf(char *conf,const int size);
#define SIZE 6
int main(void){
	int camera,sonar,laser,gripper,kinect;											//q5
	int c;
	char s[SIZE];
	
	printf("Do you want to open camera? Press 'Y' or 'N'\n");
	c=toupper(c=getchar());
	if(c=='Y')
		camera=1;
	else if(c=='N')
		camera=0;
	
	if 	(c=getchar() == '\n')
	printf("Do you want to open sonar? Press 'Y' or 'N'\n");
	c=toupper(c=getchar());
	if(c=='Y')
		sonar=1;
	else if(c=='N')
		sonar=0;	

	if 	(c=getchar() == '\n')
	printf("Do you want to open laser? Press 'Y' or 'N'\n");
	c=toupper(c=getchar());
	if(c=='Y')
		laser=1;
	else if(c=='N')
		laser=0;	
	
	if 	(c=getchar() == '\n')
	printf("Do you want to open gripper? Press 'Y' or 'N'\n");
	c=toupper(c=getchar());
	if(c=='Y')
		gripper=1;
	else if(c=='N')
		gripper=0;	
	
	if 	(c=getchar() == '\n')
	printf("Do you want to open kinect? Press 'Y' or 'N'\n");
	c=toupper(c=getchar());
	if(c=='Y')
		kinect=1;
	else if(c=='N')
		kinect=0;		
		
	sprintf(s,"%d %d %d %d %d",camera,sonar,laser,gripper,kinect);
	initConf(s,SIZE);
	
	return 0;
}
void initConf(char *conf,const int size){
	int c,s,l,g,k;
	sscanf(conf,"%d%d%d%d%d",&c,&s,&l,&g,&k);
	
	if (c==1)
		printf("Camera will be opened\n");
	if (s==1)
		printf("Sonar will be opened\n");
	if (l==1)
		printf("Laser will be opened\n");
	if (g==1)
		printf("Gripper will be opened\n");
	if (k==1)
		printf("Kinect will be opened\n");
	
}
*/
