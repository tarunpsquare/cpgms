#include<stdio.h>
void main()
{
float area, circ, rad;
float p=3.412;
printf("Enter the radius of the circle: \n");
scanf("%f", &rad);
area=p*rad*rad;
circ=2*p*rad;
printf("Area of circle is: %f", area);
printf("\n");
printf("Circumference of circle is: %f", circ);
}

