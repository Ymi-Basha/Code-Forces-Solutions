#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>

int main() {
    ll n,i=4; cin>>n;
    ll fib[50]={0};
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    fib[3]=2;
    if(n==1){
        cout<<"0";
        return 0;
    }
    else{
    while (fib[n-1]==0)
    {
        fib[i]=fib[i-1]+fib[i-2];
        i++;
    }
    cout<<fib[n-1];
    }
    
}
