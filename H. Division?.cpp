#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main()
{
    ll Input;
    cin>>Input;
    for(int i=1;i<=Input;i++)
    {
        int Rating;
        cin>>Rating;
        if(Rating<1400)
            cout<<"Division 4"<<endl;
        else if(Rating<1600)
            cout<<"Division 3"<<endl;
        else if(Rating<1900)
            cout<<"Division 2"<<endl;
        else if(Rating>=1900)
            cout<<"Division 1"<<endl;
    }

}
