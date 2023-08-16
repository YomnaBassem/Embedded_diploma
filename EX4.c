#include <stdio.h>

struct Sstudents
{
    char name[50];
    int roll;
    int marks;
};
int main()
{
    struct Sstudents elements[10];
    int i = 0;
    printf("Enter the information of students:\n");
    while (i < 10)
    {
        printf("for roll number %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", elements[i].name);
        printf("Enter mark: ");
        scanf("%d", &elements[i].marks);
        i++;
    }
    i = 0;
    printf("Displaying the information of students");
    while (i < 10)
    {
        printf("Information for roll numer %d:\n", i + 1);
        printf("Name: %s\n", elements[i].name);
        printf("Mark: %d\n", elements[i].marks);
        i++;
    }
}