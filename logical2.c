#include<stdio.h>
void main()
{
int a;
printf("Enter 1 if you have black pen\n");
printf("Enter 2 if you have blue pen\n");
scanf("%d", &a);
if(a==1 || a==2)
printf("You have pen\n");
else
printf("You dont have pen\n");
}


