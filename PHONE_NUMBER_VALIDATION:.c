#include<stdio.h>
int main()
{
    long int d,rev=0,n,r,c=0;
    scanf("%ld",&n);
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        c++;
        n=n/10;
    }
    if(c==10 && d%10!=0)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}