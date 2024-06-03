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



/*
#define SIZE 5																//	example

struct student{
	int idNumber;
	char firstName[100];
	char lastName[100];
	char gender;
	int age;
	double GPA;
};

int main(void){
	struct student aStudent={2037,"Burak","Kaleci",'M',32,3.55};
	
	struct student aStudent2;
	
	aStudent2.idNumber=1000;
	strcpy(aStudent2.firstName,"Ayse");
	strcpy(aStudent2.lastName,"Yilmaz");
	aStudent2.gender='F';
	aStudent2.age=18;
	aStudent2.GPA=2.98;
	
	printf("idNumber member is %d\n",aStudent.idNumber);
	printf("firstName member is %s\n",aStudent.firstName);
	printf("lastName member is %s\n",aStudent.lastName);
	printf("gender member is %c\n",aStudent.gender);
	printf("age member is %d\n",aStudent.age);
	printf("GPA member is %lf\n\n",aStudent.GPA);
	
	printf("idNumber member is %d\n",aStudent2.idNumber);
	printf("firstName member is %s\n",aStudent2.firstName);
	printf("lastName member is %s\n",aStudent2.lastName);
	printf("gender member is %c\n",aStudent2.gender);
	printf("age member is %d\n",aStudent2.age);
	printf("GPA member is %lf\n\n",aStudent2.GPA);
	
	double GPAAvg=(aStudent.GPA+aStudent2.GPA)/2;
	printf("Average of GPA of two student is %f\n\n",GPAAvg);
	
	struct student studentArray[SIZE];
	int i;
	
	studentArray[0]=aStudent;
	studentArray[1]=aStudent2;
	
	for(i=2;i<SIZE;i++){
		studentArray[i].idNumber=2000+i;
		printf("Enter name and surname\n");
		scanf("%s%s",studentArray[i].firstName,studentArray[i].lastName);
		printf("Enter gender\n");
		scanf("%s",&studentArray[i].gender);
		studentArray[i].age=18+rand()%18;
		printf("Enter GPA\n");
		scanf("%lf",&studentArray[i].GPA);
	}

	for(i=0;i<SIZE;i++){
		printf("%d\t",studentArray[i].idNumber);
		printf("%s\t",studentArray[i].firstName);
		printf("%s\t",studentArray[i].lastName);
		printf("%c\t",studentArray[i].gender);
		printf("%d\t",studentArray[i].age);
		printf("%lf\n\n",studentArray[i].GPA);
	}
	
	double ageAvg=0;
	for(i=0;i<SIZE;i++)
		ageAvg=ageAvg+studentArray[i].age;
		
	printf("average of students' ages is %f\n\n",ageAvg/5);
	
	
	int countMale=0;

	for(i=0;i<SIZE;i++){
		if (studentArray[i].gender=='M')
			countMale++;
	}
	printf("There are %d male student\n\n",countMale);
	
	
	int pass;
	
	for(pass=0;pass<SIZE-1;pass++){
		for(i=0;i<SIZE-1;i++){
			if(studentArray[i].GPA>studentArray[i+1].GPA) {
				struct student hold = studentArray[i];
				studentArray[i] = studentArray[i+1];
				studentArray[i+1] = hold;
			}
		}
	}
	
	for(i=0;i<SIZE;i++){
		printf("%d\t",studentArray[i].idNumber);
		printf("%s\t",studentArray[i].firstName);
		printf("%s\t",studentArray[i].lastName);
		printf("%c\t",studentArray[i].gender);
		printf("%d\t",studentArray[i].age);
		printf("%lf\n\n",studentArray[i].GPA);
	}
	
	struct student *studentPtr;
	studentPtr=studentArray;
	
	for(pass=0;pass<SIZE-1;pass++){
		for(i=0;i<SIZE-1;i++){
			if((studentPtr+i)->age > (studentPtr+i+1)->age) {
				struct student hold = studentArray[i];
				studentArray[i] = studentArray[i+1];
				studentArray[i+1] = hold;
			}
		}
	}
	
	
	
	for(i=0;i<SIZE;i++){
		printf("%d\t",(studentPtr+i)->idNumber);
		printf("%s\t",(studentPtr+i)->firstName);
		printf("%s\t",(studentPtr+i)->lastName);
		printf("%c\t",(studentPtr+i)->gender);
		printf("%d\t",(studentPtr+i)->age);
		printf("%lf\n\n",(studentPtr+i)->GPA);
	}
	
}
*/


/*
#define SIZE 5

struct student{
int idNumber;
char firstName[100];
char lastName[100];
char gender;
int age;
double GPA;
};

void printStudent(struct student p);
double calculateAvgGPA(double s1,double s2);
void determineGender(char g, char* n);
void printStudentArray(struct student *pArray);
int countMaleStudent(struct student *pArray);
void sortArray(struct student *studentArray, int param);

int main(void)
{

	struct student aStudent={2037,"Burak","Kaleci",'M',32,3.55};

	struct student aStudent2;
	aStudent2.idNumber=1000;

	strcpy(aStudent2.firstName,"Ayse");
	strcpy(aStudent2.lastName,"Yilmaz");
	aStudent2.gender='F';
	aStudent2.age=18;
	aStudent2.GPA=2.98;

	printStudent(aStudent);
	printStudent(aStudent2);

	double GPAAvg=calculateAvgGPA(aStudent.GPA,aStudent2.GPA);
	printf("Average of GPA of two student is %f\n\n",GPAAvg);

	determineGender(aStudent.gender,aStudent.firstName);
	determineGender(aStudent2.gender,aStudent2.firstName);

	struct student studentArray[SIZE];
	int i;

	studentArray[0]=aStudent;
	studentArray[1]=aStudent2;

	for(i=2;i<SIZE;i++){
		studentArray[i].idNumber=2000+i;
		printf("Enter name and surname\n");
		scanf("%s%s",studentArray[i].firstName,studentArray[i].lastName);
		printf("Enter gender\n");
		scanf("%s",&studentArray[i].gender);
		studentArray[i].age=18+rand()%18;
		printf("Enter GPA\n");
		scanf("%lf",&studentArray[i].GPA);
	}

	printStudentArray(studentArray);

	printf("There are %d male student\n\n",countMaleStudent(studentArray));

	sortArray(studentArray,2);


	printStudentArray(studentArray);

	sortArray(studentArray,4);

return 0; 
}

void printStudent(struct student p){
	printf("%d\t",p.idNumber);
	printf("%s\t",p.firstName);
	printf("%s\t",p.lastName);
	printf("%c\t",p.gender);printf("%d\t",p.age);
	printf("%lf\n\n",p.GPA);
}

double calculateAvgGPA(double s1,double s2){
	return (s1+s2)/2;
}

void determineGender(char g, char* n){
	if (g=='M')
		printf("The student %s is a male\n",n);
	else
	printf("The student %s is a female\n",n);
}

void printStudentArray(struct student *pArray){
	int i;
	for(i=0;i<SIZE;i++){
		printf("%d\t",pArray[i].idNumber);
		printf("%s\t",pArray[i].firstName);
		printf("%s\t",pArray[i].lastName);
		printf("%c\t",pArray[i].gender);
		printf("%d\t",pArray[i].age);
		printf("%lf\n\n",pArray[i].GPA);
	}
printf("----------------------------------------------------------------\n\n");
}

int countMaleStudent(struct student *pArray){
	int i,countMale=0;
	for(i=0;i<SIZE;i++){
		if (pArray[i].gender=='M')
			countMale++;
	}
	return countMale;
}
void sortArray(struct student *studentArray, int param){
	int i,pass;
	
	switch (param){
		case 1:
			for(pass=0;pass<SIZE-1;pass++){
				for(i=0;i<SIZE-1;i++){
					if(studentArray[i].idNumber>studentArray[i+1].idNumber) {
						struct student hold = studentArray[i];
						studentArray[i] = studentArray[i+1];
						studentArray[i+1] = hold;
					}
				}
			}
		break;
	
		case 2:
			for(pass=0;pass<SIZE-1;pass++){
				for(i=0;i<SIZE-1;i++){
					if(studentArray[i].gender>studentArray[i+1].gender) {
						struct student hold = studentArray[i];
						studentArray[i] = studentArray[i+1];
						studentArray[i+1] = hold;
					}
				}
			}
		break;

		case 3:
			for(pass=0;pass<SIZE-1;pass++){
				for(i=0;i<SIZE-1;i++){
					if(studentArray[i].age>studentArray[i+1].age) {
						struct student hold = studentArray[i];
						studentArray[i] = studentArray[i+1];
						studentArray[i+1] = hold;
					}
				}
			}
		break;

		case 4:
			for(pass=0;pass<SIZE-1;pass++){
				for(i=0;i<SIZE-1;i++){
					if(studentArray[i].GPA>studentArray[i+1].GPA) {
						struct student hold = studentArray[i];
						studentArray[i] = studentArray[i+1];
						studentArray[i+1] = hold;
					}
				}
			}
		break;

	}
}
*/


