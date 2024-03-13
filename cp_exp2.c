#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

/*	
void response(double r, double c,double vo, double *tPtr,double *vcPtr);			//q1
main(){	
	double r,c,vo,vc=0;
	double t;
	printf("Enter R , C and Vo: ");
	scanf("%lf%lf%lf",&r,&c,&vo);
	
	printf("R = %.2lf\nC = %.2lf\nVo = %.2lf\n",r,c,vo);
	printf("Time \t R \t\t C \t Vo \t Vc\n");
	for(t=10;t<=50;t=t+10){
		response(r,c,vo,&t,&vc);
		printf("%1.2lf \t %1.2lf \t %1.2lf \t %1.2lf \t %1.2lf\n",t,r,c,vo,vc);
	}
}

void response(double r, double c,double vo, double *tPtr,double *vcPtr){
	*vcPtr=vo*exp( ( -(*tPtr) ) / (r*c) );
}
*/


/*
void volume(double *vPtr,double r,double l,double h);								//q2
main(){
	double r,l,h,v=0;
	printf("Enter radius,length and height: ");
	scanf("%lf%lf%lf",&r,&l,&h);
	
	printf("Before calculation\n");
	printf("Radius: %.2lf\nLength: %.2lf\nHeight: %.2lf\nVolume: %.2lf\n",r,l,h,v);
	
	volume(&v,r,l,h);
	
	printf("After function call\n");
	printf("Radius: %.2lf\nLength: %.2lf\nHeight: %.2lf\nVolume: %.2lf\n",r,l,h,v);
	
}
void volume(double *vPtr,double r,double l,double h){
	*vPtr=(pow(r,2)*acos( (r-h)/r ) - (r-h)*sqrt(2*r*h-pow(h,2)) )*l;
}
*/



/*
void root(double a,double b,double c,double *x1Ptr,double *x2Ptr);					//q3
main(){
	double a=1,b=4,c=-5,x1=0,x2=0;
	printf("Before root calculation\n");
	printf("a:%.0lf\nb:%.0lf\nc:%.0lf\nx1:%.0lf\nx2:%.0lf\n",a,b,c,x1,x2);
	root(a,b,c,&x1,&x2);
	printf("After root calculation\n");
	printf("a:%.0lf\nb:%.0lf\nc:%.0lf\nx1:%.2lf\nx2:%.2lf\n",a,b,c,x1,x2);
	
	
	
	
}
void root(double a,double b,double c,double *x1Ptr,double *x2Ptr){					//q4
	*x1Ptr= ( -b +sqrt( (b*b - 4*a*c) ) )/ (2*a);
	*x2Ptr= ( -b -sqrt( (b*b - 4*a*c) ) )/ (2*a);
}
*/


/*
void division(double a,double b,double c,double d,double *r,double *i);
main(){
	double a,b,c,d,real=0,imag=0;
	printf("a,b,c and d :");
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	printf("a: %.0lf\nb: %.0lf\nc: %.0lf\nd: %.0lf\n",a,b,c,d);
	division(a,b,c,d,&real,&imag);
	printf("After division\n");
	printf("a: %.0lf\nb: %.0lf\nc: %.0lf\nd: %.0lf\nReal: %.2lf\nImag: %.2lf\n",a,b,c,d,real,imag);
	}
void division(double a,double b,double c,double d,double *r,double *i){
	*r= (a*c+b*d) / (c*c+d*d);
	*i= (b*c-a*d) / (c*c+d*d);
}
*/


/*
main(){
	int n[10],i;																	//q5
	int *n1Ptr=n,*n2Ptr,*n3Ptr,*n4Ptr,*n5Ptr;
	int x;	
	for(i=0;i<10;i++)
		n[i]=i;
		
	printf(" n1Ptr = %p\n",n1Ptr);
	printf("*n1Ptr = %d\n",*n1Ptr);
	printf(" n1Ptr+3=%p\n",n1Ptr+3);
	printf("*(n1Ptr+3)=%d\n",*(n1Ptr+3));
	
	n2Ptr=n1Ptr+7;
	printf(" n2Ptr = %p\n",n2Ptr);
	printf("*n2Ptr = %d\n",*n2Ptr);
	printf(" n2Ptr+2=%p\n",n2Ptr+2);
	printf("*(n2Ptr+2)=%d\n",*(n2Ptr+2));
	
	n3Ptr=n2Ptr-2;
	printf(" n3Ptr = %p\n",n3Ptr);
	printf("*n3Ptr = %d\n",*n3Ptr);
	printf(" n3Ptr-3=%p\n",n3Ptr-3);
	printf("*(n3Ptr-3)=%d\n",*(n3Ptr-3));
	
	n4Ptr=n3Ptr-4;
	printf(" n4Ptr = %p\n",n4Ptr);
	printf("*n4Ptr = %d\n",*n4Ptr);
	printf(" n4Ptr+3=%p\n",n4Ptr+3);
	printf("*(n4Ptr+3)=%d\n",*(n4Ptr+3));
	
	n5Ptr=n3Ptr+1;
	printf(" n5Ptr = %p\n",n5Ptr);
	printf("*n5Ptr = %d\n",*n5Ptr);
	printf(" n5Ptr+2=%p\n",n5Ptr+2);
	printf("*(n5Ptr+2)=%d\n",*(n5Ptr+2));
	
	x=n2Ptr-n5Ptr;
	printf("n2Ptr-n5Ptr=%d\n",x);	
}
*/
 
 
 /*
 main(){																				//q6
	int numbers[10];			
	int i;						
	int *numbersPtr=numbers;	



	for(i=0;i<10;i++)
		numbers[i]=rand()%10; 

	for(i=0;i<10;i++){
		printf("%3d",numbers[i]); 
		printf("%20p",&numbers[i]);
		printf("%20p",numbersPtr+i);
		printf("%3d\n",*(numbersPtr+i)); 
		
	}
}
*/
