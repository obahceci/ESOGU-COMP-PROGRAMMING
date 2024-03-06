#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

/*
int main(void)																	//q1
{
	int a=3;		
	int b=7;		
	int c;

	c=a+b;
	double *aPtr,*bPtr,*cPtr;	

	aPtr=&a;		
	bPtr=&b;		
	cPtr=&c;		

	printf("The value of c is %d\n",c);
	printf("The value of &a is %p\n\n",&a);

	printf("The value of bPtr is %p\n",bPtr);
	printf("The value of *bPtr is %d\n\n",*bPtr);

	printf("The value of cPtr is %p\n",cPtr);
	printf("The value of *aPtr is %d\n\n",*aPtr);

	printf("The value of *&a is %d\n",*&a);
	printf("The value of *&c is %d\n\n",*&c);

	printf("The value of *&aPtr is %p\n",*&aPtr);
	printf("The value of &*bPtr is %p\n",&*bPtr);
	printf("The value of &*cPtr is %p\n",&*cPtr);

	return 0; 
}
*/



/*
void polinomial(int *xPtr,int a,int b,int c);										//q2

main(){
	int a,b,c,x;
	a=1+rand()%10;
	b=1+rand()%10;
	c=1+rand()%10;
	x=1+rand()%10;
	printf("a=%d\nb=%d\nc=%d\nx=%d\n\n",a,b,c,x);
	
	polinomial(&x,a,b,c);
	printf("After function call\n");
	printf("a=%d\nb=%d\nc=%d\nx=%d\n",a,b,c,x);
	
	
	
}

void polinomial(int *xPtr,int a,int b,int c){
	*xPtr=a*pow(*xPtr,2)+b*(*xPtr)+c;
}
*/


/*
void rotate(double *xrPtr,double *yrPtr,double xc,double yc,double angle);
int main(){
	double xr,yr,xc,yc,angle;													//q3
	printf("Enter Xc and Yc:");
	scanf("%lf%lf",&xc,&yc);

	printf("Enter rotation angle:");
	scanf("%lf",&angle);
	
	printf("(Xc,Yc)=(%.2lf,%.2lf)\t Angle= %.2lf\n\n",xc,yc,angle);
	
	rotate(&xr,&yr,xc,yc,angle);
	
	printf("After Function Call\n");
	printf("(Xc,Yc)=(%.2lf,%.2lf)\t (Xr,Yr)=(%.2lf,%.2lf) \t Angle= %.2lf\n\n",xc,yc,xr,yr,angle);
}
void rotate(double *xrPtr,double *yrPtr,double xc,double yc,double angle){
	*xrPtr= cos(angle*M_PI/180)*xc-sin(angle*M_PI/180)*yc;
	*yrPtr= sin(angle*M_PI/180)*xc-cos(angle*M_PI/180)*yc;
}
*/

/*
void convert(double *rPtr,double *tPtr,double *pPtr,double x,double y,double z);		//q4

int main(){
	
	double x,y,z,r,t,p;
	printf("enter x, y and z values:");
	scanf("%lf%lf%lf",&x,&y,&z);
	printf("Before function call\n");
	printf("(X,Y,Z)=(%.0lf,%.0lf,%.0lf)\n(r,theta,phi)=(%.2lf,%.2lf,%.2lf)\n\n",x,y,z,r,t,p);
	
	convert(&r,&t,&p,x,y,z);
	
	printf("After function call\n");
	printf("(X,Y,Z)=(%.0lf,%.0lf,%.0lf)\n(r,theta,phi)=(%.2lf,%.2lf,%.2lf)\n\n",x,y,z,r,t,p);
	
}

void convert(double *rPtr,double *tPtr,double *pPtr,double x,double y,double z){
	*rPtr=sqrt(x*x + y*y + z*z);
	*tPtr= atan2(sqrt(pow(x,2)+pow(y,2)),z)*180/M_PI;
	*pPtr=atan2(y,x)*180/M_PI;	
}
*/

