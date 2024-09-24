#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

ll arr[100001]={0},prefix[100001]={0};
void solve() {
    ll n;cin >>n;
    for(ll i=1;i<=n;i++) {
        cin>>arr[i];
        prefix[i]=prefix[i-1]+arr[i];
    }
    ll t;cin>>t;
    while(t--) {
        ll r,l;cin>>r>>l;
        cout<<prefix[l]-prefix[r-1]<<endl;
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
