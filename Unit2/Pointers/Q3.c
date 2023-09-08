#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char string[100];
    char *ps=string;
    int i=0;
    printf("Input a string : ");
    gets(string);
    for( ; i<strlen(string) ; i++){
        *ps=string[i];
        ps++;
    }    
    i=0;
    printf("\n");
    printf("Reverse of string is : ");
    while(i<strlen(string)){
        printf("%c",*ps);
        ps--;
        i++;
    }
}