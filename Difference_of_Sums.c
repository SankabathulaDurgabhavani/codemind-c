#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+(i*i);
        c=c+i;
    }
    int sum=c*c;
    int d=abs(sum-s);
   cout<<d;
}