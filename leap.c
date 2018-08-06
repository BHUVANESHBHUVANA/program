#include<stdio.h>
int main()
{
int n;
printf("\nEnter the number");
scanf("%d",&n);
if((n%4)==0)
{
printf("\nThe year is a leap year");
}
else
{
printf("\nThe year is not a leap year");
}
return 0;
}
