#include<stdio.h>
void main()
{
char name[20];
float m1, m2, m3, total, avg;
printf("Enter the name of the student: \n");
scanf("%s", name);
printf("Enter marks : \n");
scanf("%f %f %f", &m1, &m2, &m3);
printf("Name is: %s \n", name);
printf("Marks in subjects are: %f %f %f\n", m1, m2, m3);

total=m1+m2+m3;
avg=total/3.0;

printf("Total is: ");
printf("%f \n", total);
printf("Average is: ");
printf("%f \n", avg);
}

 
