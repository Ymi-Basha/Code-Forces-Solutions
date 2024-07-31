#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    ll in;
    cin>>in;
    for(ll i=1;i<=in;i++) {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==(b+c) || b==(a+c) || c==(a+b)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
