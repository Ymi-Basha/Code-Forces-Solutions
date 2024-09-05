#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
//cout<<
//cin>>


int main() {
    string s; cin>>s;
    ll slength=s.length(),cnt=0;
    for(int i=0; i<slength/2 ;i++) {
        if(s[i]!=s[slength-1-i]) {
            cnt++;
        }
    }
    if(cnt==1 || (cnt==0 && slength%2==1)) {
        cout<<"YES";
    }
    else
        cout<<"NO";
    

}
