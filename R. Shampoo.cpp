#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    ll v,a,b,c;
    cin>>v>>a>>b>>c;
    for(;;) {
        if((v=v-a)<0) {
            cout<<"F";
            break;
        }
        else if((v=v-b)<0) {
            cout<<"M";
            break;
        }
        else if((v=v-c)<0) {
            cout<<"T";
            break;
        }
    }

}
