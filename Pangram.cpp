#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int n;
    string s;
    cin>>n>>s;
    int freq[26]={0};
    for(int i=0;i<=n;++i) {
        s[i]= toupper(s[i]);
        freq[s[i]-'A']++;
    }
    for(int i=0;i<=26;++i) {
        if(freq[i]==0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
