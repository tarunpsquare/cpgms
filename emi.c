#include<stdio.h>
#include<math.h>
void main()
{
float p, r, n, emi;

printf("Enter the rate of interest: \n");
scanf("%f\n", &r);
printf("Enter the Principal amount: \n");
scanf("%f\n", &p);
printf("Enter the number of monthly installments: \n");
scanf("%f\n", &n);
emi = (pow((p*r*(1+r)), n))/(pow((1+r), (n-1)));

printf("EMI is: %f\n", emi);
}

