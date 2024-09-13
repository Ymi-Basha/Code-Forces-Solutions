#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    ll n,c,ans; cin>>n>>c;
    int arr[n],z=n,arr1[z];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
        arr1[i]=i+1;
    }
    for(int i=0; i<n;i++) {
        if(arr[i]-c<=0) {
            ll temp= arr[i],temp1=arr1[i];
            for(int j=i;j<n;j++) {
                arr[j]=arr[j+1];
                arr1[j]=arr1[j+1];
            }
            arr[n-1]=temp;
            arr1[n-1]=temp1;
            ans=arr1[i];
            i--;
            n--;

        }
        else {
            arr[i]-=c;
            ll temp= arr[i],temp1=arr1[i];
            for(int j=i;j<n;j++) {
                arr[j]=arr[j+1];
                arr1[j]=arr1[j+1];
            }
            arr[n-1]=temp;
            arr1[n-1]=temp1;
            ans=arr1[i];
            i--;
        }
    }
    cout<<ans;
}
