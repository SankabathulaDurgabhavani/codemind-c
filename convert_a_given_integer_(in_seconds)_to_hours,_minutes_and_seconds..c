#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=a/3600;
    int d=a%3600;
    int n=d/60;
    int p=d%60;
    int b=p/60;
    printf("H:M:S-%d:%d:%d",s,n,p);
}