#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    ll k,s,cnt=0;
    cin >> k >> s;
    if(k>s) {
        k=s;
    }
    for(ll i=0;i<=k;i++){
        for(ll j=0;j<=k;j++){
            ll z=s-i-j;
            if(i+j+z==s && z>=0 && z<=k)
                cnt++;
        }
    }

    cout << cnt << endl;
}
