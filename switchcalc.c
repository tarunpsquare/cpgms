#include<stdio.h>
void main()
{
int ch, a, b;
printf("Enter 2 values: ");
scanf("%d%d", &a ,&b);
printf("Enter 1 for addition, 2 for subtraction and 3 for multiplication:");
scanf("%d", &ch);
switch(ch)
{
case 1: printf("Sum is: %d\n", a+b);
break;
case 2: printf("Difference is: %d\n", a-b);
break;
case 3: printf("Product is: %d\n", a*b);
break;
default: printf("Invalid input");
}
}

