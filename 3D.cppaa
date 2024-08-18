#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
struct stars {
    int x,y,z;
};

int main() {
    ll n;
    cin>>n;
    stars arr[n]={0};
    for(int i=0;i<n;i++){
        cin >>arr[i].x>>arr[i].y>>arr[i].z;
        }
    for(int i=0;i<n;i++){
        ll cntx=0,cnty=0,cntz=0;
        for (int j=0; j<n;j++) {
            if(arr[i].x==arr[j].x)
                cntx+=1;
            if(arr[i].y==arr[j].y)
                cnty+=1;
            if(arr[i].z==arr[j].z)
                cntz+=1;
        }
        cout<<cntx-1<<" "<<cnty-1<<" "<<cntz-1<<endl;
    }
}

