#include<stdio.h>
int main()
{
    int n,i,sum=0,p=1,d,t;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        n=n/10;
        p=p*t;
        sum=sum+t;
    }
    d=p-sum;
    printf("%d",d);
}