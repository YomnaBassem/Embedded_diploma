#include <stdio.h>
#include <stdlib.h>
int Reverse(int x);
int main(void) {
	int x;
	printf("enter a number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	Reverse(x);
	return 0;
}
int Reverse(int x){
	if (x!=0){
		int n=x%10;
		printf("%d",n);
		Reverse(x/10);
	}
}
