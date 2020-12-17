#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    vector<vector<ll>> g(n+1);

    rep(i,0,n){
        g[i].push_back(i+1);
        for(ll j=1; i+j*6<=n; j*=6){
            g[i].push_back(j*6+i);
        }
        for(ll j=1; i+j*9<=n; j*=9){
            g[i].push_back(j*9+i);
        }
    }

    vector<ll> flag(n+1,-1);
    queue<ll> q;
    q.push(0);
    flag[0] = 0;
    while(!q.empty()){
        auto top = q.front(); q.pop();
        for(auto x:g[top]){
            if(flag[x] == -1){
                flag[x] = flag[top] + 1;
                q.push(x);
            }
        }
    }
    put(flag[n]);
}