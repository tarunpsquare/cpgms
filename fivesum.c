#include<stdio.h>
void main()
{
int a, b, d1, d2, d3, d4, d5, sum;
printf("Enter a 5 digit number:\n");
scanf("%d", &a);
d1=a%10;
b=a/10;
d2=b%10;
b=b/10;
d3=b%10;
b=b/10;
d4=b%10;
b=b/10;
d5=b%10;
sum=d1+d2+d3+d4+d5;
printf("%d\n", d5);
printf("%d\n", d4);
printf("%d\n", d3);
printf("%d\n", d2);
printf("%d\n", d1);
printf("Sum is: %d\n", sum);
}

