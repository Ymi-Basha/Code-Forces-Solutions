#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

ll freq[200000]={0};
void solve() {
    ll n;cin >>n;
    ll arr[n],ans=-1;
    fill(freq,freq+200000,0);
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
        freq[arr[i]]++;
        if(freq[arr[i]]==3) {
            ans=arr[i];
        }
    }
    cout<<ans<<endl;

}

int main() {
    fastIO();
    ll TestCases=1;
    cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
