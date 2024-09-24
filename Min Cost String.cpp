#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
string s;
ll a[26];

bool between(ll st,ll en,ll t){
    return ((a[t]<=max(a[s[en]-'a'],a[s[st]-'a'])) && (a[t]>=min(a[s[en]-'a'],a[s[st]-'a'])));
}

void setchar(ll st,ll en, char c){
    for(ll i=st;i<en;i++){
        s[i]=c;
    }
}

void find_char(ll st,ll en){
    if(st== -1){
    for(ll i=0;i<26;i++){
        if(between(en,en,i)){
            setchar(st+1,en,char(i+'a'));
            return;
    }
        
    }
    }
    
    if(en== s.size()){
    for(ll i=0;i<26;i++){
    if(between(st,st,i)){
        setchar(st+1,en,char(i+'a'));
        return;
    }
        
    }}
    for(ll i=0;i<26;i++){
    if(between(st,en,i)){
        setchar(st+1,en,char(i+'a'));
        break;
    }}
    
    }



void solve(){
    cin >> s;
    for(ll i=0 ;i<26;i++){
        cin >> a[i];
    }
    ll i=0;
    ll st=0;
    while(i<s.length()){
        st=i;
        while(s[i]=='?'){
        i++;}
        if(st!=i){
        find_char(st-1,i);
        }
        i++;
    }
    ll sum=0;
    for(ll i=0;i<s.size()-1;i++){
        sum+=abs(a[s[i]-'a']-a[s[i+1]-'a']);
    }
    cout << sum << endl;
    cout << s<< endl;
    
}

int main() {
    fastIO();
    ll TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
} 
