#include<stdio.h>
int main()
{
    int n,i=1,rev=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        i=n%10;//123%10=3;again 12%10==2 again 1%10=0
        n=n/10;//123/10=10)123(12)==q again 12/10=1 again 1/10=1 
        rev=rev*10+i;//10==23-20==3=rem
    }
     printf("%d",rev);
    
}