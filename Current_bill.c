#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float bill,cost,sur;
    if(n<=199)
    {
        cost=1.20;
        bill=cost*n;
    }
    else if(n>=200 && n<400)
    {
        cost=1.50;
        bill=cost*n;
    }
     else if(n>=400 && n<600)
    {
        cost=1.80;
        bill=cost*n;
    }
    else
    {
        cost=2.00;
        bill=cost*n;
    }
    if(bill>400)
    {
        sur=bill*0.15;
    }
    else if(bill<=400)
    {
        sur=100;
    }
    printf("%0.2f",sur+bill);
}
