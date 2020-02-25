#include<stdio.h>
void main()
{
int age;
printf("Enter the age: \n");
scanf("%d", &age);
if(age<=18 && age>=13)
printf("You are a teenager\n");
else
printf("You are not teenager\n");
}

