/*
 ============================================================================
 Name        : Array_EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2] , b[2][2] , sum[2][2];
	printf("Enter the elements of the first matrix\n");
    for (int r=1; r<3 ; r++){
    	for(int c=1; c<3; c++){
    		printf("Enter a%d%d : \n",r,c);
    		fflush(stdin); fflush(stdout);
    		scanf("%f",&a[r][c]);
    	}
    }
    for (int r=1; r<3 ; r++){
    	for(int c=1; c<3; c++){
    		printf("Enter b%d%d : \n",r,c);
    		fflush(stdin); fflush(stdout);
    		scanf("%f",&b[r][c]);
    	}
    }

    for (int r=1; r<3 ; r++){
        	for(int c=1; c<3; c++){
        		sum[r][c]=a[r][c]+b[r][c];
        	}
        }
    for (int r=1; r<3 ; r++){
        	for(int c=1; c<3; c++){
        		printf("%f ",sum[r][c]);
        	}
        	printf("\n");
        }

}
