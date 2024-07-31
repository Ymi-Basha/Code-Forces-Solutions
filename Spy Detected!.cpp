#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>


int main() {
    int q;
    cin>>q;
    while (q--)
    {
        int in;
        int n,save;
        cin>>in;
        int a[in];
        for (int i = 0; i < in; i++)
        {
            cin>>n;
            a[i]=n;
        }
        if(a[0]==a[1]) {
            save=a[0];
        }
        else if(a[1]==a[2]) {
            save=a[1];
        }
        else
            save=a[0];
        for (int i = 0; i < in; i++)
        {
            if(a[i]!=save) {
                cout<<i+1<<endl;
                break;
            }
            else
                continue;
        }

    }

}


