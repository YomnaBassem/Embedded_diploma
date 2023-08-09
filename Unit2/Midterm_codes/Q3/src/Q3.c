/*
 ============================================================================
 Name        : Q3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int prime (int n){
	if(n<=1) return 1;
	for(int i=2; i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(void) {
	int start, stop;
	printf("Enter two numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&start,&stop);
	printf("the prime numbers between them are:");
	for(int i=start+1;i<=stop;i++){
		if(prime(i)) printf("%d ",i);
	}
}
