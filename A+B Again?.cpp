#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    int q;
    cin>>q;
    while(q--) {
        int a,b,c;
        cin>>a;
        b=a%10;
        c=a/10;
        cout<<b+c<<endl;
    }

}
