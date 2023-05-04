#include<stdio.h>
int main()
{
    int a=0,b=1,c=a+b;
    printf("%d %d %d ",a,b,c);
    int i,n;
    scanf("%d",&n);
    for(i=3;i<n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
}