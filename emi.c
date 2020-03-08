
#include<stdio.h>
#include<math.h>
void main()
{
float p, r, emi;
int n;
printf("Enter the Principal amount: ");
scanf("%f", &p);
printf("Enter the rate of interest: ");
scanf("%f", &r);
r=r/(12*100);
printf("Enter the time in years: ");
scanf("%d", &n);
n=n*12;
emi = (p*r*pow((1+r), n))/(pow((1+r), (n))-1);
printf("The principal amount is: Rs.%f\n", p);
printf("The rate of interest is: %f\n", r);
printf("The number of installments is/are: %d\n", n);
printf("EMI is: Rs.%f\n", emi);
}
