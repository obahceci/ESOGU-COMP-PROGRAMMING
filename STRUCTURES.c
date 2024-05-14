#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


/*
struct student{
	int idNumber;
	char firstName[30];
	char lastName[30];
	char gender;
	int age;
	double GPA;
	struct student *sPtr;					//structure cannot contain an instance of itself unless the type is pointer(self-referantial structure)
} aStudent,engineering[1000], *studentPtr;


int main(void){
	struct student aStudent,engineering[1000],*studentPtr;		//you can declare struct variables in main function like here 

}																//or between the closing brace of struct def. and the semicolon
																//is struct name isn't defined you must use the second method of variable definiton 

*/


/*
struct student{								
	int idNumber;
	char firstName[30];
	char lastName[30];
	char gender;
	int age;
	double GPA;
	struct student *sPtr;					
};

int main(void){
	struct student aStudent={2037,"Burak","Kaleci",'M',32,3.55};    	// struct variable initializing
	struct student *aStudentPtr=&aStudent;
	
	printf("ID Number is %d\n",aStudent.idNumber);
	printf("First Name is %s\n",aStudent.firstName);					//structure member operator (.)
	printf("Last Name is %s\n",aStudent.lastName);
	printf("Gender is is %c\n",aStudent.gender);
	printf("Age is %d\n",aStudent.age);
	printf("GPA is %.2lf\n",aStudent.GPA);
	
	printf("\n");
	printf("ID Number is %d\n",aStudentPtr->idNumber);
	printf("First Name is %s\n",aStudentPtr->firstName);					//structure pointer operator (.)
	printf("Last Name is %s\n",aStudentPtr->lastName);
	printf("Gender is is %c\n",aStudentPtr->gender);						// (*aStudentPtr).idNumber is equivalent to aStudentPtr->idNumber
	printf("Age is %d\n",aStudentPtr->age);			
	printf("GPA is %.2lf\n",aStudentPtr->GPA);
	
	
	return 0;
}
*/


/*
typdef struct{																//typedef
	char *face;
	char *suit;
}card;

int main(void){
	struct card deck[52];
}

*/


/*
union number{																//union stores a common storage for members big enoguh to hold the biggest member size
	int x;																	// in union you can only process only one of the member at a time
	double y;
};

int main(){
	union number value;
	
	value.x=100;
	
	printf("int num :%d\ndouble num :%lf\n",value.x,value.y);
	
	value.y=100;
	
	printf("int num :%d\ndouble num :%lf\n",value.x,value.y);

}
*/




/*
enum status{	REST,														//ENUM TYPE
				GO,
				STOP,
				TURN
};
enum status robotStatus;



void triangular(void);

int main(void){
	
	printf("enter robot status: ");
	scanf("%d",&robotStatus);
	
	triangular();
	
	return 0;
	
}

void triangular(void){

	if(robotStatus==REST){
		printf("Robot starts to motion...\n");
		robotStatus=GO;
	}

	if(robotStatus==GO){
		printf("Going along an edge...\n");
		robotStatus=STOP;
	}

	if(robotStatus==STOP){
		printf("Robot reaching the end of the edge and stops...\n");
		robotStatus=TURN;
	}

	if(robotStatus==TURN){
		printf("Robot starting to turn...\n");
		robotStatus=REST;
	}
}
*/




