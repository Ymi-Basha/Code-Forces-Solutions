#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


void solve() {
    ll n,m,x,y;cin>>n>>m>>x>>y;
    ll arr[1001][1001]={0};
    for(ll i=1;i<=n;i++) {
        for(ll j=1;j<=m;j++) {
            cin>>arr[i][j];
        }
    }
    for(ll i=1;i<=n;i++) {
        for(ll j=1;j<=m;j++) {
            arr[i][j]+=arr[i][j-1];
        }
    }
    for(ll i=1;i<=m;i++) {
        for(ll j=1;j<=n;j++) {
            arr[j][i]+=arr[j-1][i];
        }
    }
    ll sum=LLONG_MIN;
    for(ll D=x;D<=n;++D) {
        for(ll R=y;R<=m;++R) {
            ll U=D-x+1,L=R-y+1;
            sum =max(sum,arr[D][R]-arr[D][L-1]-arr[U-1][R]+arr[U-1][L-1]);
        }
    }
    cout<<sum;
}



int main() {
    fastIO();
    ll TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
