#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct s{
    string n1,n2,n3,n4;
};
int main() {
    ll q;
    cin>>q;
    s arr[q];
    for(int i=0;i<q;i++) {
        cin>> arr[i].n1 >>arr[i].n2 >>arr[i].n3 >>arr[i].n4;
    }
    for(int j=1;j<q;j++) {
        if(arr[0].n1==arr[j].n1 && arr[0].n2==arr[j].n2 && arr[0].n3==arr[j].n3 && arr[0].n4==arr[j].n4) {
            continue;
        }
        else {
            cout<<"you were right";
            return 0;
        }
    }
        cout<<"Empedocles was right";
}

