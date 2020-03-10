#include<stdio.h>
void main()
{
float percentage;
printf("Enter the total percentage: \n");
scanf("%f", &percentage); 
if(percentage>=90)
printf("Entered percentage is: %d\n", percentage");
printf("Grade S\n");
if(percentage>=80 && percentage<90)
printf("Entered percentage is: %d", percentage");
printf("Grade A\n");
