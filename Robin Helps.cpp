#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void funct(ll x,ll y) {
    abs(x-y);
}

void solve() {
    ll n,k,robin=0,cnt=0;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(ll i=0;i<n-1;i++) {
        if(arr[i]>=k) {
            robin+=arr[i];
        }
        if(arr[i+1]==0 && robin>0) {
            robin--;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    fastIO();
    ll TestCases;
    TestCases=1;
    cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
