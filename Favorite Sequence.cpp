#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


void solve() {
    ll n;cin>>n;
    ll arr[n]={0},arr1[n]={0};
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    if(n%2!=0) {
        arr1[n-1]=arr[(n/2)];
        for(ll i=0;i<n/2;i++) {
            arr1[i+i]=arr[i];
            arr1[i+i+1]=arr[n-1-i];
        }
        for(ll i=0;i<n;i++) {
            cout<<arr1[i]<<" ";
        }
    }
    else {
        for(ll i=0;i<n/2;i++) {
            arr1[i+i]=arr[i];
            arr1[i+i+1]=arr[n-1-i];
        }
        for(ll i=0;i<n;i++) {
            cout<<arr1[i]<<" ";
        }
    }
    cout<<endl;
}



int main() {
    fastIO();
    ll TestCases=1;
    cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
