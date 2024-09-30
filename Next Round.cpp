#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


void solve() {
    ll n,k,cnt=0;cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++) {
        if(arr[k-1]<=arr[i] && arr[i]>0) {
            cnt++;
        }
    }
    cout<<cnt;
}

int main() {
    fastIO();
    ll TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
