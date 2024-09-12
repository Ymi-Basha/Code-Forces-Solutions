#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
//cout<<
//cin>>
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll arr[5001][5001]={0};
int main() {
    fastIO();
    string s; cin>>s;
    int q; cin>>q;
    int n=s.length();

    for(ll i=0;i<n;i++){
        arr[i][i]=1;
        for(ll j=i-1,k=i+1; j>=0 && k<n && s[j]==s[k] ; j--,k++ ) {
            arr[j][k]++;
        }
        for(ll j=i,k=i+1; j>=0 && k<n && s[j]==s[k] ; j--,k++) {
            arr[j][k]++;
        }

    }
    while(q--) {
        ll l,r; cin>>l>>r;
        l--,r--;
        if(arr[l][r]>0) {
            cout<<"YES"<<'\n';
        }
        else {
            cout<<"NO"<<'\n';
 ;
        }
    }
}
