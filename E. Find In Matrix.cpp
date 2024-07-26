#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int n,m,comp;
    cin>>n>>m;
    int a[n][m];
    for (int i =0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    cin>>comp;
    for (int i =0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]==comp) {
                cout<<"YES";
                return 0;
            }
        }
    }
cout<<"NO";
}
