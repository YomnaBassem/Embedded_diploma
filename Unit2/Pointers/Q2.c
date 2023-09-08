#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char *alph;
    char start='A';
    alph=&start;
    printf("The Alphabets are \n");
    while(*alph<='Z'){
        printf("%c ",*alph);
        (*alph)++;
    }
}