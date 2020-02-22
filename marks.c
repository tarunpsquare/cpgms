#include<stdio.h>
void main()
{
char name[20];
float m1, m2, m3, total, avg;
printf("Enter the name of the student: \n");
scanf("%s", name);
printf("Enter marks in subject1: \n");
scanf("%f", &m1);
printf("Enter marks in subject2: \n");
scanf("%f", &m2);
printf("Enter marks in subject3: \n");
scanf("%f", &m3);
printf("Name is: %s \n", name);
printf("Marks in subject1 is: %f \n", m1);
printf("Marks in subject2 is: %f \n", m2);
printf("Marks in subject3 is: %f \n", m3);
total=m1+m2+m3;
avg=total/3.0;
printf("Total is: ");
printf("%f \n", total);
printf("Average is: ");
printf("%f \n", avg);
}

 
