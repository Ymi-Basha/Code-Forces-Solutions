#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    ll n1,n2,n3,cnt=1;
    cin>>n1>>n2;
    n3=n1;
    while((n1-n2)%10!=0) {
        if(n1%10==0)
            break;
        n1+=n3;
        cnt++;
    }

    cout<<cnt;


}
