#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

struct Point{
    ll x,y;
    bool operator<(const Point &right) {
        return x == right.x ? y < right.y : x < right.x;
    }
}typedef P;

int main(){
    ll n, m, r_size;
    cin >> n >> m >> r_size;
    vector<ll> r(r_size);
    vector<ll> a(m), b(m), c(m);
    rep(i,0,m) cin >> a[i] >> b[i] >> c[i];

    vector<vector<P>> g(n+1);
    rep(i,0,m){
        g[a[i]].push_back({b[i], c[i]});
        g[b[i]].push_back({a[i], c[i]});
    }

    ll ans = 0;

    rep(i,0,r_size-1){
        
        vector<ll> flag(n+1,-1);
        queue<ll> q;
        q.push(r[i]);
        flag[r[i]] = 0;
        while(!q.empty()){
            auto top = q.front();
            for(auto x:g[top]){
                if(flag[x.x] == -1){
                    flag[x.x] =
                }
            }
        }
    }
}
