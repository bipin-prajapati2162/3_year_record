#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
    struct student s1={1,"priya",90.5};
    struct student *ptr=&s1;
    printf("info for s1");
    printf("\n%d  %s   %f",ptr->roll_no, ptr ->name ,ptr ->marks);
}    
