#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


void solve() {
    ll n,x=0;cin>>n;
    for(ll i=0;i<n;i++) {
        string s;cin>>s;
        if(s=="X++") {
            x++;
        }
        else if(s=="++X") {
            ++x;
        }
        else if(s=="X--") {
            x--;
        }
        else if (s=="--X") {
            --x;
        }
    }
    cout<<x;
}

int main() {
    fastIO();
    ll TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
