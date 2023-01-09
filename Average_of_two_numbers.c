#include<stdio.h>
int main()
{
    float a,num1,num2;
    scanf("%f%f",&num1,&num2);
    a=(num1+num2)/2;
    {
        printf("Average of %0.f and %0.f is: %0.2f",num1,num2,a);
    }
}