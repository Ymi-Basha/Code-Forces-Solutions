#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll N,L;cin>>N>>L;
    ld COST=0;
    cout<<fixed<<setprecision(6);
    pair <ld,ld> arr[N];
    for(ll i=0;i<N;i++) {
        ld v=0,l=0;
        cin>>v>>l;
        arr[i].first=v/l;
        arr[i].second=l;
    }
    sort(arr,arr+N);
    reverse(arr,arr+N);
    for(ll i=0;i<N;i++) {
        if (arr[i].second<L) {
            COST+= arr[i].first*arr[i].second;
            L-=arr[i].second;
        }
        else if(arr[i].second==L) {
            COST+= arr[i].first*arr[i].second;
            break;
        }
        else if(arr[i].second>L) {
            COST+= arr[i].first*L;
            break;
        }
    }
    cout<<COST;
}

int main() {
    fastIO();
    ll TestCases;
    TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
