#include<stdio.h>
int main()
{
int a, b, c, n;
printf("Enter 2 numbers: \n");
scanf("%d %d", &a, &b);
printf("Enter 1 for addition \n");
printf("Enter 2 for subtraction \n"); 
printf("Enter 3 for multiplication \n");
printf("Enter 4 for division \n");
scanf("%d", &n);
if(n==1)
{
c=a+b;
printf("Sum is:");
printf("%d", c);
}
if(n==2)
{
c=a-b;
printf("Difference is:");
printf("%d", c);
}
if(n==3)
{
c=a*b;
printf("Product is:");
printf("%d", c);
}
if(n==4)
{
c=a/b;
printf("Answer after division is:");
printf("%d", c);
}
else
printf("Wrong input");
}

