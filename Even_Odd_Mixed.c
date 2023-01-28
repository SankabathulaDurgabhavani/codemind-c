#include<stdio.h>
int main()
{
    int n,c=0,e=0,o=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        c=c+1;
        n=n/10;
        if(r%2==0)
        {
            e=e+1;
        }
    else
    {
        o=o+1;
    }
    }
    if(e==c)
    {
        printf("Even");
    }
    else if(o==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    
}