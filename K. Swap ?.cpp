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
    swap(*max_element(a,a+n),*min_element(a,a+n));
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }

}
