
#include <stdio.h>
#include <stdlib.h>

double squareroot(int num){
	if (num<0) printf("error") ;
	double guess=num/2.0;
	double prevguess;
	while(prevguess!=0){
		prevguess=guess;
		guess=0.5*(guess+num/guess);
	}
	return guess;
}
int main(void) {
	int x;
	printf("enter a number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	double sqroot=squareroot(x);
	printf("The square root of %d is %lf",x,sqroot);
	return 0;
}
