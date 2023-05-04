#include<stdio.h>
int reverse(int n)
{
    int re,r=0;
    while(n!=0)
    {
        re=n%10;
        r=r*10+re;
        n=n/10;
    }
    return r;
}
int main()
{
    int n,i,rs,sr;
    scanf("%d",&n);
    i=n*n;
    rs=reverse(n);
    sr=rs*rs;
    if(i==reverse(sr))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}