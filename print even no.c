#include<stdio.h>
void main()
{
int n,m,i;
scanf("%d",&n);
scanf("%d",&m);
for(i=n;i<m;i++)
{
if(i%2==0)
printf("%d",i);
}
}
