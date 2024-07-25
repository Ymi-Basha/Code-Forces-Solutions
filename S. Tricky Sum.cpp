#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    ll in;
    cin>>in;
    for(ll i=0;i<in;i++) {
        ll num,sum,sum2=0,t=2;
        cin>>num;
        sum=num*(num+1)/2;
        for(ll j=1;j<=num;j*=2) {
            sum2+=j;
        }
        cout<<sum-2*sum2<<endl;
    }

}
