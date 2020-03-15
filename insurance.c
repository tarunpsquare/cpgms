#include<stdio.h>
void main()
{
char mar;
int age, gen;
printf("If driver is married, enter: m\n");
printf("If driver is not married, enter: n\n");
scanf("%c", &mar);
switch(mar)
{
case 'm':
printf("Driver is insured.\n");
break;
case 'n':
printf("Enter 1 for male and 2 for female:\n");
scanf("%d", &gen);
printf("Enter age:\n");
scanf("%d", &age);
if(gen==1 && age>30)
{
printf("Driver is insured");
}
else if(gen==2 && age>25)
{
printf("Driver is insured.\n");
}
else 
printf("Driver is not insured.\n");
break;
default: 
printf("Invalid input.\n");
}
}
