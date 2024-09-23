#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

struct points {
    ll x,y;
};
struct rectangles{
    points p1,p2,p3,p4;
    ll idx;
    ll area() {
        ld l=max({p1.x,p2.x,p3.x,p4.x})-min({p1.x,p2.x,p3.x,p4.x});
        ld w=max({p1.y,p2.y,p3.y,p4.y})-min({p1.y,p2.y,p3.y,p4.y});
        return w*l;
    }
};
bool comp(rectangles& p3, rectangles& p2) {
    ll area1=p3.area(), area2=p2.area();
    if(area1<area2)
        return true;
    else
        return false;
}

void solve() {
    ll n;cin>>n;
    rectangles a[n];
    for(ll i=0;i<n;i++) {
        cin>>a[i].p1.x>>a[i].p1.y;
        cin>>a[i].p2.x>>a[i].p2.y;
        cin>>a[i].p3.x>>a[i].p3.y;
        cin>>a[i].p4.x>>a[i].p4.y;
        a[i].idx=i+1;
    }
    sort(a,a+n,comp);
    for(ll i=0;i<n;i++) {
        cout<<a[i].idx<<" "<<a[i].area()<<endl;
    }
}

int main() {
    fastIO();
    ll TestCases=1;
    //cin>>TestCases;
    while (TestCases--) {
        solve();
    }
}
