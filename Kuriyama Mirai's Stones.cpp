#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


void solve() {
    ll n;cin>>n;
    ll p1[n+1]={0},p2[n+1]={0};
    for(ll i=1;i<=n;i++) {
        cin>>p1[i];
        p2[i]=p1[i];
    }
    sort(p2,p2+n+1);
    for(ll i=1;i<=n;i++) {
        p1[i]+=p1[i-1];
        p2[i]+=p2[i-1];
    }
    ll m;cin>>m;
    while(m--) {
        ll type,l,r;cin>>type>>l>>r;
        if(type==1) {
            cout<<p1[r]-p1[l-1]<<endl;
        }
        else if(type==2) {
            cout<<p2[r]-p2[l-1]<<endl;
        }
    }
}



int main() {
    fastIO();
    ll TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
