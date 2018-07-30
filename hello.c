#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\nEnter the number:");
scanf("%d",&n);
if(n>0)
{
printf("\nThe number is positive");
}
else if(n==0)
{
printf("\nThe number is zero");
}
else
{
printf("\nThe number is negative");
}
getch();
}
