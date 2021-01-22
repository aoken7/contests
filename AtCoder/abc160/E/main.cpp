#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll x, y, a, b, c; cin >> x >> y >> a >> b >> c;
    vector<ll> p(a), q(b);
    priority_queue<ll>  rq;
    rep(i,0,a) cin >> p[i];
    rep(i,0,b) cin >> q[i];
    rep(i,0,c) {
        ll tmp; cin >> tmp; rq.push(tmp);
    }

    sort(all(p),greater<ll>());
    sort(all(q),greater<ll>());

    priority_queue<ll, vector<ll>, greater<ll>> pq, qq;

    rep(i,0,x) pq.push(p[i]);
    rep(i,0,y) qq.push(q[i]);

    while(!rq.empty()){
        ll pqtop = pq.top();
        ll qqtop = qq.top();
        ll rqtop = rq.top();

        if(pqtop > rqtop and qqtop > rqtop) break;

        if(pqtop < qqtop){
            pq.pop();
            pq.push(rqtop);
        }else{
            qq.pop();
            qq.push(rqtop);
        }
        rq.pop();
    }

    ll ans = 0;

    while(!pq.empty()) ans += pq.top(), pq.pop();
    while(!qq.empty()) ans += qq.top(), qq.pop();
    
    put(ans);
}
