/*
 ============================================================================
 Name        : String_EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[100] , rev[100];

	printf("Enter the string :");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);
	int j=0;
	for(int i=strlen(str)-1; i>=0 ; i--){
		rev[j]=str[i];
		j++;
	}
	rev[j]='\0';
	printf("Reverse string is : %s",rev);
}
