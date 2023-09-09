#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct SEmployee{
    char Name[50];
    int ID;
};

int main(void){
 struct SEmployee *P_struct[2];
 struct SEmployee FirstOne={"Alex",1002};
 P_struct[0]=&FirstOne;
 printf("Employee name : %s \n",P_struct[0]->Name);
 printf("Employee ID: %d",P_struct[0]->ID);
}