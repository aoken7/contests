#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), b(n);
    rep(i, 0, n - 1) cin >> a[i] >> b[i];

    vector<vector<ll>> g(n + 1);

    rep(i, 0, n - 1) {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    vector<ll> dis(n + 1, -1);

    queue<ll> que;
    que.push(1);
    dis[1] = 0;
    while (!que.empty()) {
        auto top = que.front(); que.pop();
        for(auto x:g[top]){
            if(dis[x] == -1){
                dis[x] = dis[top] + 1;
                que.push(x);
            }
        }
    }

    rep(i,0,q){
        ll c, d; 
        cin >> c >> d;
        
        ll diff = abs(dis[c] - dis[d]);
        
        if(diff % 2 == 0){
            put("Town");
        }else{
            put("Road");
        }
    }

    //putl(dis);
}
