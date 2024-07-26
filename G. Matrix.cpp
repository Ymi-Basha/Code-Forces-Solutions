#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int n,sum1=0,sum2=0;
    cin>>n;
    int a[n][n];
    for (int i =0;i<n;i++) {
        for(int j=0; j<n;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j) {
                sum1 +=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i+j==(n-1)) {
                sum2+=a[i][j];
            }
        }
    }
    cout<<abs(sum1-sum2);

}
