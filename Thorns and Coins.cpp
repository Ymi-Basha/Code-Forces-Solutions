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
    ll n,coins=0;cin>>n;
    string s;cin>>s;

    for(ll i=1;i<=n;i++) {
        if(s[i]=='@') {
            coins++;
        }
        if(s[i]=='*'&&s[i-1]=='*'){
            break;
        }
    }
    cout<<coins<<endl;
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
