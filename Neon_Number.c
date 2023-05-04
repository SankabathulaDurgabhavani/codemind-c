#include<stdio.h>
int main()
{
    int n,i,s,re,r=0;
    scanf("%d",&n);
    i=n*n;
    while(i!=0)
    {
        re=i%10;
        r=r+re;
        i=i/10;
    }
    if(r==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}