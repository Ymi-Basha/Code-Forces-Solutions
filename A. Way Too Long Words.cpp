#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
    {
        string x;
        cin>>x;
        int sz = x.length();

        if (sz<=10)
        {
            cout<<x<<endl;
        }

        else
        {
            cout<<x[0]<< sz-2 << x[sz-1]<<endl;
        }


    }


    return 0;
}
