#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++) {
        cin>>arr1[i];
        arr2[i]=arr1[i];
    }
    reverse(arr2,arr2+n);
    for (int i=0;i<n;i++) {
        if(arr1[i]==arr2[i]) {
            continue;
        }
        else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}
