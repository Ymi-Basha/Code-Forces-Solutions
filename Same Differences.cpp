#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll freq[600003]={0};

void solve() {

    ll n,ans=0; cin>> n;
    int arr[n]={0};
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    int arr2[n];
    for(ll i=0;i<n;i++) {
        arr2[i]=arr[i]-i;
    }
    for(ll i=0;i<n;i++) {
        freq[arr2[i]+200001]++;
    }
    for(ll i=0;i<n;i++) {
        ans+=freq[arr2[i]+200001]-1;
        freq[arr2[i]+200001]--;
    }
    cout<<ans<<endl;
}

int main() {
    fastIO();
    ll TestCases;
    //TestCases=1;
    cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
