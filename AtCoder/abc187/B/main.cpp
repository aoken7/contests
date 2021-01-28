#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

double check(pair<ll,ll> a, pair<ll,ll> b){
    ll y = a.second - b.second;
    ll x = a.first - b.first;
    if(x == 0) return 0;
    return y / (double)x;
}

int main(){
    ll n; cin >> n;
    vector<pair<ll,ll>> p(n);
    rep(i,0,n){
        ll x, y; cin >> x >> y;
        p[i] = {x,y};
    }

    ll ans = 0;

    rep(i,0,n-1){
        rep(j,i+1,n){
            double a = check(p[i],p[j]);
            if(a <= 1.0 and a >= -1.0)
                ans++;
        }
    }

    put(ans);
}
