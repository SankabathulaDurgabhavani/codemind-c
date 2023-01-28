#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,sum,a;
    scanf("%d",&n);
    s=(n*(n+1)*(2*n+1))/6;
    sum=((n*(n+1))/2)*((n*(n+1))/2);
    a=sum-s;
    {
        printf("%d",a);
    }
}