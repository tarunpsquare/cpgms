#include<stdio.h>
#include<math.h>
void main()
{
float p, r, n, emi;
printf("Enter the Principal amount: \n");
scanf("%f\n", &p);
printf("Enter the rate of interest: \n");
scanf("%f\n", &r);
printf("Enter the number of monthly installments: \n");
scanf("%f\n", &n);
emi = (p*r*pow((1+r), n))/(pow(1+r, n)-1);
printf("The principal amount is: %f\n", p);
printf("The rate of interest is: %f\n", r);
printf("The number of monthly installments is/are: %f\n", n);
printf("EMI is: %f\n", emi);
}

