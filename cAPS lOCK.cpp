#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cout<<
//cin>>

int main() {
    string s;
    cin>>s;
    char s0= s[0];
    if ('a'<=s[0] && s[0]<='z')
    {
        for (int i = 1; i < s.length(); i++)
        {
            if ('A'<=s[i] && s[i]<='Z')
            {
                continue;
            }
            else
            {
                cout<<s;
                return 0;
            }
        }

        for(int i=1;i<s.length();i++)
        {
        s[i]= char(tolower(s[i]));
        }
        s[0]=toupper(s[0]);
        cout<<s;
        return 0;


    }
    else
    {
        for (int i = 1; i < s.length(); i++)
        {
            if ('A'<=s[i] && s[i]<='Z')
            {
                continue;
            }
            else
            {
                cout<<s;
                return 0;
            }
        }
        for(int i=0;i<s.length();i++)
        {
        s[i]= char(tolower(s[i]));
        }
        cout<<s;
        return 0;

    }
    cout<<s;


}
