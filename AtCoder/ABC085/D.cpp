#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, h; cin >> n >> h;
    priority_queue<pair<ll,ll>> q;
    rep(i,0,n){
        ll x,y; cin >> x >> y;
        q.push(make_pair(x,y));
    }

    ll ans = 0;
    priority_queue<ll> b;
    auto top = q.top(); q.pop();
    while (!q.empty()){
        auto x = q.top(); q.pop();
        b.push(x.second);
    }
    
    while (h > 0){
        if(!b.empty() and top.first < b.top() and h > top.second){
            h -= b.top(); b.pop();
            ans++;
        }else{
            if(top.second > top.first){
                h -= top.second;
                ans++;
                if(h < 0) break;
            }
            ans += ceilf128(h / (long double)top.first);
            break;
        }
    }
    
    put(ans);
}