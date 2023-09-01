#include<stdio.h>
int main()
{
    int i,r,k;
    scanf("%d",&i);
    scanf("%d",&r);
    scanf("%d",&k);
    int j,c=0;
    for(j=i;j<=r;j++)
    {
        if(j%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}