#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>
int main() {
    int Nn,n;
    cin>>Nn>>n;
    int a[Nn];
    int freq[n]={0};

    for (int i = 0; i < Nn; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < Nn; i++)
    {
        freq[a[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<freq[i]<<endl;
    }
    
    
    }
