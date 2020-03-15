
#include<stdio.h>
void main()
{
float percentage;
printf("Enter the total percentage: \n");
scanf("%f", &percentage); 
if(percentage>=90)
{
printf("Entered percentage is: %f\n", percentage);
printf("Grade S\n");
}
else if(percentage>=80 && percentage<90)
{
printf("Entered percentage is: %f\n", percentage);
printf("Grade A\n");
}
else if(percentage>=70 && percentage<80)
{
printf("Entered percentage is: %f\n", percentage);
printf("Grade B\n");
}
else if(percentage>=60 && percentage<70)
{
printf("Entered percentage is: %f\n", percentage);
printf("Grade C\n");
}
else
printf("Grade FAIL\n");
}
