#include<stdio.h>
int main()
{
    int n,c=0,r,s=0,d=0;
    scanf("%d",&n);
    while(n!=0)
    {
        c=c+1;
        r=n%10;
        if(n%2==0)
        {
            s=s+1;
        }
        else
        {
            d=d+1;
        }
        n=n/10;
    }
    if(c==s)
    {
      printf("Even");  
    }
    else if(c==d)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}