#include<stdio.h>
int reverse(int n)
{
    int r=0,re;
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
    int i,sr,rs,n;
    scanf("%d",&n);
    i=n*n;
    sr=reverse(n);
    rs=sr*sr;
    if(i==reverse(rs))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}