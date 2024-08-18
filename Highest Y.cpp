#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct n {
    ll x,y;
};

int main() {
    ll q;
    cin>>q;
    pair<ll,ll> arr [q];

    for(int i=0;i<q;i++) {
        cin>>arr[i].second>>arr[i].first;
    }
    sort(arr,arr+q);
    reverse(arr,arr+q);
    for(int i=0;i<q;i++) {
        cout<<arr[i].second<<" "<<arr[i].first<<endl;
    }
}
