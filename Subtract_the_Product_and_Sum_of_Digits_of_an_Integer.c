#include<stdio.h>
int main()
{
    int n,p=1,s=0,t;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        n=n/10;
        p=p*t;
        s=s+t;
    }
    printf("%d",p-s);
}