#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n/2;i++) {
        cout<<a[i]<<" ";
    }
    for(int i=n/2-1; i>=0;i--) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1; i>=n/2;i--) {
        cout<<a[i]<<" ";
    }
    for(int i=n/2; i<n;i++) {
        cout<<a[i]<<" ";
    }

}
