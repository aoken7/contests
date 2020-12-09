#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    priority_queue<ll> q;
    rep(i,n){
        ll tmp; cin >> tmp;
        q.push(tmp);
    }

    for(ll i=0; i<m; i++){
        ll top = q.top(); q.pop();
        q.push(top/2);
    }

    ll ans = 0;
    while(!q.empty()){
        ans += q.top(); q.pop();
    }
    put(ans);
}