#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a%400==0)
printf("leap year);
elseif(a%100==0)
printf("not a leap year");
elseif(a%4==0)
printf("leap year");
else
printf("not a leap year");
}
