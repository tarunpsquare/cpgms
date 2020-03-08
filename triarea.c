#include<stdio.h>
#include<math.h>
void main()
{
int a, b, c, s;
float area;
printf("Enter the 3 sides of the triangle:\n");
scanf("%d %d %d", &a, &b, &c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of triangle is:%f\n", area);
}

