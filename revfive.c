#include<stdio.h>
void main()
{
int a, b, d1, d2, d3, d4, d5, rev;
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
rev=10000*d1+1000*d2+100*d3+10*d4+1*d5;
printf("Entered number is: %d\n", a);
printf("Reversed number is: %d\n", rev);
}


