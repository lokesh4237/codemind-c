#include<stdio.h>
int main()
{
    int n,s,sum,f,i;
    scanf("%d",&n);
    i=n%10;
    while(n>=10){
        n=n/10;
        }
        sum=n+i;
    printf("%d",sum);
}