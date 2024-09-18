#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isbeaut(int arr[],int n) {
    int sum =0;
    for(int i=0;i<n;i++) {
        if(arr[i]==sum) {
            return false;
        }
        sum+=arr[i];
    }
    return true;
}

void print_arr(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    if(isbeaut(arr,n)) {
        cout<<"YES"<<endl;
        print_arr(arr,n);
    }
    else {
        for(int i=2;i<n;i++) {
            swap(arr[1],arr[i]);
            if(isbeaut(arr,n)){
                cout<<"YES"<<endl;
                print_arr(arr,n);
                return;
            }
            swap(arr[1],arr[i]);
        }
        cout<<"NO"<<endl;
    }
}

int main() {
    fastIO();
    ll TestCases;
    //TestCases=1;
    cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
