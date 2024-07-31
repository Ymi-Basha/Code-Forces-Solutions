#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n,cnt=0;
        string s;
        cin>>n>>s;
        int freq[26]={0};
        for(int i=0; i<n ; i++) {
            freq[s[i]- 'A']++;
            if(freq[s[i]- 'A']==1) {
                cnt+=2;
            }
            else {
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
}
