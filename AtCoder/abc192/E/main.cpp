#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

struct info{
    ll c,t,k;
}typedef I;

int main(){
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<ll> a(m), b(m), t(m), k(m);
    rep(i,0,m) cin >> a[i] >> b[i] >> t[i] >> k[i];

    vector<vector<I>> g(n+1);

    rep(i,0,m){
        g[a[i]].push_back({b[i],t[i],k[i]});
        g[b[i]].push_back({a[i],t[i],k[i]});
    }

    vector<ll> time(n+1,1e18);
    queue<ll> q;
    time[x] = 0;
    q.push(x);
    while(!q.empty()){
        ll top = q.front(); q.pop();
        for(auto z:g[top]){
            //if(time[z.c] > -1) continue;
            //q.push(z.c);
            ll tmp = 0;
            if(time[top] % z.k !=  0)
                tmp = z.t + time[top] + z.k - time[top] % z.k;
            else
                tmp = z.t + time[top];
            
            if(time[z.c] > tmp){
                q.push(z.c);
                time[z.c] = tmp;
            }
        }
    }
    //putl(time);
    if(time[y] >= 1e18-1) put(-1);
    else put(time[y]);
}
