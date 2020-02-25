#include<stdio.h>
void main()
{
float basic, hra, da, gross;
printf("Enter the basic salary: \n");
scanf("%f", &basic);
hra=0.2*basic;
da=0.4*basic;
gross=basic+hra+da;
printf("Basic salary is: %f\n", basic);
printf("HRA is: %f\n", hra);
printf("DA is: %f\n", da);
printf("Gross salary is: %f\n", gross);
}




