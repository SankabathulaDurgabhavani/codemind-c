#include<stdio.h>
int main()
{
	int i,n,r,ds=0;
	scanf("%d",&n);
	while(1<=n)
	{
		r=n%10;
		ds=ds+r;
		n=n/10;
	}
	printf("%d",ds);
	i++;
}
	
