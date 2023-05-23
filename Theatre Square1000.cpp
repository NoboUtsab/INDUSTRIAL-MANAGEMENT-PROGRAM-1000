#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,m,a,l,r;
    cin>>n>>m>>a;
    if(n%a==0)
    {
        l=n/a;
    }
    else
    {
        l=n/a+1;
    }
     if(m%a==0)
    {
        r=m/a;
    }
    else
    {
        r=m/a+1;
    }
    cout<<l*r<<endl;

}
