#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char string[]="w3resource";
    char *ps=string;
    printf("Input a string : ");
    for(int i=0 ; i<strlen(string) ; i++){
        printf("%c",ps[i]);
    }    
    printf("\n");
    printf("Reverse of string is : ");
    for (int i=strlen(string) ; i>=0 ; i--){
        printf("%c",ps[i]);
    }
}