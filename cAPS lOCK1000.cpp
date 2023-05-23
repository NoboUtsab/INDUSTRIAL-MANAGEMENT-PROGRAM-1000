#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=0,m=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            l++;
        }
        else
        {
            m++;
        }
    }
    if(l>m)
    {
        if(s[0]>=97 && s[0]<=122)
        {
            s[0]=s[0]-32;
            for(int i=1; i<s.size(); i++)
            {
                if(s[i]>=65 && s[i]<=90)
                {
                    s[i]=s[i]+32;
                }
            }

        }
        else
        {
           for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
        }

    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
        if(s[0]>=97 && s[0]<=122)

        {
            s[0]=s[0]-32;
        }
    }

    cout<<s<<endl;
}

