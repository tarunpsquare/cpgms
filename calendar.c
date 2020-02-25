#include<stdio.h>
void main()
{
int n, year, month, week, day;
printf("Enter the number: \n");
scanf("%d", &n);
year = n/365;
month=n/30;
week=n/7;
day=n;
printf("Years: %d\n", year);
printf("Months: %d\n", month);
printf("Weeks: %d\n", week);
printf("Days: %d\n", day);
}






