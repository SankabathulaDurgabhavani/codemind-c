#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,s,p=0,r;
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        p=p+r;
        s=s/10;
    }
    if(p==temp)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}