#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,counter;
   cin>>t;
   while(t--)
    {
        int Petya,Vasya,Tonya;
        cin>>Petya>>Vasya>>Tonya;

        if (Petya+Vasya+Tonya>=2)
            counter++;
    }
    cout<<counter;


    return 0;
}
