#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i;
    float s=0,t;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
     t=sqrt(i);
     s=s+t;
    }
    printf("%0.2f",s);
}