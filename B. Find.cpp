#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int n,s;
    cin>>n>>s;
    int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]==s) {
                cout<<i;
                return 0;
            }
        }
    cout<<"Not Found";
}
