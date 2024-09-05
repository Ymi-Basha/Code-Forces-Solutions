#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
//cout<<
//cin>>


int main() {
    //time = distance/speed
    ll n,cnt=0;
    ld v;
    cin>>n>>v;
    ll reaction[n];
    ld dist[n];

    for(ll i=0;i<n;i++) {
        cin>> reaction[i];
    }
    for(ll i=0;i<n;i++) {
        cin>> dist[i];
        if(dist[i]<=reaction[i]*v)
            cnt++;
    }
    cout<<cnt;
}
