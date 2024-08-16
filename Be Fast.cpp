#include <bits/stdc++.h>
using namespace std
#define ll long long
//cout<<
//cin>>
int main() {
    ll n,sum=0;
    cin>>n;
    for(ll i=1;i<=n;i++) {
        sum+=i*i;
    }
    cout<<sum;
}
