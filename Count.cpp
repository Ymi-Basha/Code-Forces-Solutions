#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int N,q,l,r,x;
    cin>>N>>q;
    int a[N];
    for(int i=0;i<N;i++) {
        cin>>a[i];
    }
    while(q--) {
        cin>>l>>r>>x;
        int b=0;
        for(int i=l-1;i<=r-1;i++) {
            if(a[i]==x){
                b+=1;
            }
        }
        cout<<b<<endl;
    }


}
