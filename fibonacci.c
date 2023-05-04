#include<stdio.h>
int main()
{
    int n,a=0,b=1,m=a+b,i;
    scanf("%d",&n);
    printf("%d %d %d ",a,b,m);
    for(i=3;i<n;i++)
    {
        a=b;
        b=m;
        m=a+b;
        printf("%d ",m);
    }
    
}