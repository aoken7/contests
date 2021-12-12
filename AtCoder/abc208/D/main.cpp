#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, m;
vector<vector<pair<ll, ll>>> graph;
vector<ll> a, b, c;
ll ans = 0;

int d[402][402];

void warshall_floyd(int n) {
    rep(i, 0, 402) rep(j, 0, 402) d[i][j] = 1e9;
    rep(i, 0, n + 1) d[i][i] = 0;
    rep(i, 0, m) { d[a[i]][b[i]] = c[i]; }

    for (int k = 1; k <= n; k++) {          // 経由する頂点
        for (int i = 1; i <= n; i++) {      // 始点
            for (int j = 1; j <= n; j++) {  // 終点
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                if(d[i][j] < 1e9) ans += d[i][j];
            }
        }
    }
}

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    cin >> n >> m;
    a = b = c = vector<ll>(m);
    rep(i, 0, m) cin >> a[i] >> b[i] >> c[i];

    /*
    graph = vector<vector<pair<ll, ll>>>(n + 1);

    rep(i, 0, m) { graph[a[i]].push_back({b[i], c[i]}); }

    // warshall_floyd(n + 1);

    ll ans = 0;

    rep(s, 1, n + 1) {
        rep(t, s+1, n + 1) {
            rep(k, 1, n + 1) {
                vector<ll> cost(n+1,1e9);
                queue<ll> q;
                q.push(s);
                cost[s] = 0;
                while(!q.empty()){
                    auto top = q.front(); q.pop();
                    for(auto x:graph[top]){
                        if(x.first <= k or x.first == t){
                            //q.push(x.first);
                            ll tmp = min(cost[x.first], cost[top] + x.second);
                            if(tmp < cost[x.first]){
                                q.push(x.first);
                                cost[x.first] = tmp;
                            }
                        }
                    }
                }
                if(cost[t] != 1e9)
                    ans += cost[t];
                //cout << s << "->" << t << " "; putl(cost);
            }
        }
    }
    */

    warshall_floyd(n);

    put(ans);
}
