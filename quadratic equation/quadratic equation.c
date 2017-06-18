#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	int D,S;
	int x1,x2;
	
	printf ("enter 3 number: ");
	scanf ("%d%d%d\n",a,b,c);
	
	D=pow(b,2);
	S=(4*a*c);
	D=D-S;
	
	if(D>0){
		x1=-b+sqrt(D);
		x1/=2*a;
		x2=-b-sqrt(D);
		x2/=2*a;
		printf("answer:\n x1= %d \n x2= %d",x1,x2);
	}
	if (D==0){
		x1=-b;
		x1/=2*a;
		printf("answer:\n x1= %d",x1);
	}
	if (D<0){
		printf ("answer: No roots");
	}
	return 0;
}
