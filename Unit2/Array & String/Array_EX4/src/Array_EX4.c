/*
 ============================================================================
 Name        : Array_EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ,a[10] ,x ,location;
	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be inserted:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("Enter the location:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);
	for (int i=0;i<n;i++){
		if(i==location-1){
			printf(" %d %d ",x,a[i]);
		}
		else{
			printf(" %d ",a[i]);
		}
	}
}
