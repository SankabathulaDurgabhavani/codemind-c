#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=a/60;
    int d=a%60;
    printf("%d Hour(s) %d Minute(s)",c,d);
}