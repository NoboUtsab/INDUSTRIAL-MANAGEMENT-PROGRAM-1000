#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum,mul,l;
    vector<int>v;
    cin>>a>>b>>c;
    v.push_back(a+(b*c));
    v.push_back((a*b)+c);
     v.push_back((a+b)*c);
     v.push_back(a*(b+c));
     v.push_back(a*(b*c));
     v.push_back(a+(b+c));
     sort(v.begin(),v.end());
      l=v.size();



     cout<<v[l-1]<<endl;

}
