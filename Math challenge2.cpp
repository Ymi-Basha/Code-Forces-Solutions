#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>

int main() {
    string s;
    cin>>s;
    int slen=s.length(), ans=0;
   for(int i=0;i<slen;i++) {
       string temps=s.substr(i,1);
       int temp = stoi(temps);
       ans+=temp;
   }
    if(ans%3==0)
        cout<<"YES";
    else
        cout<<"NO";
}
