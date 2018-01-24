#include<stdio.h>
void main()
{
int a,sum=0,div;
scanf("%d",&a);
while(a!=0)
{
div=a%10;
sum=sum*10+div;
a/=10;
}
if(a==sum)
printf("yes it is a palindrome");
else
printf("not a palindrome");
}
