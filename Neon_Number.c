#include<stdio.h>
int main()
{
    int n,sum=0,r=0,i,a,q;
    scanf("%d",&n);
    
        q=n*n;
        while(q!=0)
        {
        a=q%10;
        r=r+a;
        q=q/10;
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