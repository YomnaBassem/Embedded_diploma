#include <stdio.h>
#include <stdlib.h>
struct Sstudent{
char name[50];
int roll_number;
float marks;
};
int main(){
    struct Sstudent data;
    printf("Enter the information of students:\n");
    printf("Enter the name:");
    scanf("%s",&data.name);
    printf("Enter roll number:");
    scanf("%d",&data.roll_number);
    printf("Enter the marks:");
    scanf("%f",&data.marks);

    printf("Displaying the information:\n");
    printf("Name: %s\n",data.name);
    printf("Roll: %d\n",data.roll_number);
    printf("Mark: %0.2f",data.marks);
    return 0;
}