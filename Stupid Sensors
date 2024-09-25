#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
ll freq[200001];
ll isval[200001];
void solve() {
    ll n,k,q; cin>>n>>k>>q;
    while (n--) {
        ll l, r;
        cin >> l >> r;
        freq[l]++;
        if (r + 1 <= 200000) {
            freq[r + 1]--;
        }
    }
    for(ll i=1;i<=200000;i++) {
        freq[i]+=freq[i-1];
    }
    for(ll i=1;i<=200000;i++) {
        if(freq[i]>=k) {
            isval[i]=1;
        }
        else {
            isval[i]=0;
        }
    }
    for (ll i = 1; i <= 200000; i++) {
        isval[i] += isval[i - 1];
    }
    while(q--) {
        ll l,r;cin>>l>>r;
        cout<<isval[r]-isval[l-1]<<endl;
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
