#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    vector<ll> c(m), d(m);
    rep(i,m) cin >> c[i] >> d[i];

    vector<vector<ll>> node(n+1);

    rep(i,m){
        node[c[i]].push_back(d[i]);
        node[d[i]].push_back(c[i]);
    }
    
    vector<ll> flag(n+1,0);

    rep(i,n){
        if(flag[i+1] == 1) continue;
        
        ll sum = 0;
        
        queue<ll> q;
        q.push(i+1);
        flag[i+1] = 1;
        while(!q.empty()){
            ll top = q.front(); q.pop();
            //cout << "i:" << i << " top:" << top << endl;;
            sum += a[top-1] - b[top-1];
            //cout << "top:" << top << endl;
            for(auto x:node[top]){
                if(flag[x] == 0){
                    q.push(x);
                    flag[x] = 1;
                }
            }
        }
        
        //cout << "sum:" << sum << endl;
        if(sum != 0){
            put("No");
            return 0;
        }
    }
    put("Yes");
}