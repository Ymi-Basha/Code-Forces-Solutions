#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
//cout<<
//cin>>


int main() {
    ll a,b,c;
    cin>>a>>b;
    c=a+b;

    string sa,sb,sc;//fa,fb,fc;
    sa=to_string(a);
    sb=to_string(b);
    sc=to_string(c);

    find:
    auto fa=sa.find('0');
    auto fb=sb.find('0');
    auto fc=sc.find('0');
    if(fa != string::npos) {
        sa.erase(fa,1);
        goto find;
    }
    if(fb != string::npos) {
        sb.erase(fb,1);
        goto find;
    }
    if(fc != string::npos) {
        sc.erase(fc,1);
        goto find;
    }

    ll ia= stoll(sa),ib=stoll(sb),ic=stoll(sc);
    if(ia+ib==ic){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}
