#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\nEnter the number");
scanf("%d",&n)
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
printf("\nThe number is invalid number");
}
getch();
}
