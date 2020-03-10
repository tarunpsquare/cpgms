#include<stdio.h>
void main()
{
int n1, n2, n3;
printf("Enter 3 numbers: \n");
scanf("%d%d%d", &n1, &n2, &n3);
if(n1==n2 && n2==n3)
{
printf("All the entered numbers are equal");
}
else
{
if(n1>n2 && n1>n3)
printf("The greatest number is: %d", n1);
else if(n2>n1 && n2>n3)
printf("The greatest number is: %d", n2);
else 
printf("The greatest number is: %d", n3);
}
}
