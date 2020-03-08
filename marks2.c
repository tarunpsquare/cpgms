#include<stdio.h>
void main()
{
char name[20];
float m1, m2, m3, m4, m5, total, avg;
printf("Enter the name of the student: \n");
scanf("%s", name);
printf("Enter marks : \n");
scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
printf("Name is: %s \n", name);
printf("Marks in subjects are: \n%f \n%f \n%f \n%f \n%f\n", m1, m2, m3, m4, m5);

total=m1+m2+m3+m4+m5;
avg=total/5.0;

printf("Total is: ");
printf("%f \n", total);
printf("Average is: ");
printf("%f \n", avg);
}

 
