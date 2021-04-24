#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

struct Point{
    ll x,y;
    bool operator<(const Point &right) {
        return y < right.y;
    }
}typedef P;

int main(){
    ll n; cin >> n;
    vector<P> xc(n);
    map<ll,vector<ll>> mp;
    rep(i,0,n){
        ll a, b;
        cin >> a >> b;
        mp[b].push_back(a);
    } 

    ll ans = 0;
    ll pre = 0;

    for(auto x:mp){
        sort(all(x.second));
        
    }

    put(pre);
    put(ans);
}
