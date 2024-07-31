#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main()
{
    ll a,b,c,big,mid,small;
    cin>>a>>b>>c;
    if(a>=b && b>=c)
    {
        big=a;
        mid=b;
        small=c;
    }
    else if(a>=c && c>=b)
    {
        big=a;
        mid=c;
        small=b;
    }
    else if(b>=a && a>=c)
    {
        big=b;
        mid=a;
        small=c;
    }
    else if(b>=c && c>=a)
    {
        big=b;
        mid=c;
        small=a;
    }
    else if(c>=a && a>=b)
    {
        big=c;
        mid=a;
        small=b;
    }
    else if(c>=b && b>=a)
    {
        big=c;
        mid=b;
        small=a;
    }
    if(big-mid-small<0)
        cout<<"0";
    else if(big-mid-small==0)
        cout<<"1";
    else
        cout<<big-mid-small+1;
    
}
