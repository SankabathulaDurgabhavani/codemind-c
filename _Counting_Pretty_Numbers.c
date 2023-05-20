#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int l,r,i;
    scanf("%d%d",&l,&r);
    int c=0;
    for(i=l;i<=r;i++)
    {
        if(i%10==2||i%10==3||i%10==9)
        {
            c++;
        }
    }
    printf("%d
",c);
}
}