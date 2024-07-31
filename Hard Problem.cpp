#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    ll a,b,c,big,mid,sml;
    cin>>a>>b>>c;
    if(a>=b && b>=c) {
        big=a;
        mid=b;
        sml=c;
    }
    else if(a>=c && c>=b) {
        big=a;
        mid=c;
        sml=b;
    }
    else if(b>=a && a>=c) {
        big=b;
        mid=a;
        sml=c;
    }
    else if(b>=c && c>=a) {
        big=b;
        mid=c;
        sml=a;
    }
    else if(c>=a && a>=b) {
        big=c;
        mid=a;
        sml=b;
    }
    else if(c>=b && b>=a) {
        big=c;
        mid=b;
        sml=a;
    }
    cout<<sml<<" "<<mid<<" "<<big;


}
