/*
 ============================================================================
 Name        : Assi_2_@.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char x, y[]={'a','e','i','o','u'};
	int found=0;
		printf("Enter an alphabet :");
		fflush(stdin); fflush(stdout);
		scanf("%c",&x);
		for(int i=0;i<5;i++){
			if(y[i]==x) {
		found=1;
			break;
			}
		}
		if(found){
			printf("%c is a vowel",x);
		}
		else{
			printf("%c is a consonant",x);
		}
}
