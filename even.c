#include<stdio.h>
int main()
{
int n;
printf("\nEnter the number:");
scanf("%d",&n);
if((n%2)==0)
{
printf("\nThe number is even");
}
else if((n%2)!=0)
{
printf("\nThe number is odd");
}
else
{
printf("\nThe number is invalid");
}
return 0;
}
