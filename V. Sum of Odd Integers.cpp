#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   long long x,t;
   cin>>t;
   x=0;
   while(x<t)
   {
    long long k,n;
    cin>>n>>k;
    if (n%2==0 && k%2==0 && k*k<=n)
        cout<<"YES"<<endl;
    else if (n%2!=0 && k%2!=0 && k*k<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    x++;
   }
    return 0;
}
