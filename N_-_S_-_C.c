#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}