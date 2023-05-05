#include<stdio.h>
int main()
{
    int i,m;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int n,r,re=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
      r=n%10;
      re=re*10+r;
      n=n/10;
    }
    if(temp==re)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}