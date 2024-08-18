#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll q;
    cin>>q;
    while(q--) {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int sf=s.find("B");
        if(sf>=3 || sf==-1)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
}
