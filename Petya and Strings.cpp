#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


void solve() {
    string s1,s2;cin>>s1>>s2;
    ll cnt1=0,cnt2=0;

    for(ll i=0;i<s1.size();i++) {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    for(ll i=0;i<s1.size();i++) {
        if(s1[i]==s2[i])continue;
        else if(s1[i]>s2[i]){cout<<"1"; return;}
        else if(s1[i]<s2[i]){cout<<"-1"; return;}
    }
    cout<<"0";

}

int main() {
    fastIO();
    ll TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
