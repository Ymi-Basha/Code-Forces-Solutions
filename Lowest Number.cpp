#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int n,min;
    cin>>n;
    int a[n];
    for (int i =0;i<n;i++) {
            cin>>a[i];
        }
    min=*min_element(a,a+n);
    for(int i=0; i<n;i++) {
        if(a[i]==min) {
            cout<<min<<" "<<i+1;
            return 0;
        }
    }

}
