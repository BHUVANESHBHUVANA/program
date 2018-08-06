#include<stdio.h>
int main()
{
int a,b,c;
printf("\nEnter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("\nThe number A is greater");
}
else if(b>c)
{
printf("\nThe number B is greater");
}
else
{
printf("\nThe number C is greater");
}
return 0;
}
