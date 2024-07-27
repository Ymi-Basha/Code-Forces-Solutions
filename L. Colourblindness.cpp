#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool f=1;
        for(int i=0;i<n;i++) {
            if((s1[i]=='R' && s2[i]!='R') || (s2[i]=='R' && s1[i]!='R')) {
                f=0;
                break;
            }
        }
        if(f) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }





}
