#include<stdio.h>
int main()
{
int a,s,f,count=0;
scanf("%d",&a); 
while(a>0)
{
s=a%10;
a=a/10;
count=count+s;
}
printf("%d",count);
}