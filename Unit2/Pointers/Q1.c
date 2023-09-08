#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int m=29;
    printf("Address of m is : 0x%x\n",&m);
    printf("value of m is : %d\n",m);
    int *ab=&m;
    printf("Now ab is assigned with the address of m\n");
    printf("Address of pointer ab : 0x%x\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    m=34;
    printf("The value of m is assigned to 34 now\n");
    printf("Address of pointer ab : 0x%x\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    *ab=7;
    printf("The pointer variable ab is assigned with the value 7 now\n");
    printf("Address of m is : 0x%x\n",ab);
    printf("value of m is : %d\n",*ab);
}