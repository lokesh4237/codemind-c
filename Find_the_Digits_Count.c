#include<stdio.h>
int main()
{
int a,s,c=0;
scanf("%d",&a); 
while(a>0)
{
s=a%10;
c=c+1;
a=a/10;
}
printf("%d",c);
}
