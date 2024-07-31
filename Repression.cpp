#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main()
{
    int a,b,c,max1,max2,smoll;
    cin>>a>>b>>c;

    if(a>=b)
    {
        max1=a;
        smoll=b;
    }

    else
    {
        max1=b;
        smoll=a;
    }


    if(c>=max1 || c>=smoll )
        max2=c;
    else
        max2=smoll;
    cout<<max1 + max2;
}
