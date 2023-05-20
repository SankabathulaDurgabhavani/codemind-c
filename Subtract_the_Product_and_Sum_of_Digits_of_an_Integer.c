#include<stdio.h>
int main()
{
    int n,i,s=0,p=1,r,d;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    d=p-s;
    printf("%d",d);
}