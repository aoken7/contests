#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll h, w, n, m;
    cin >> h >> w >> n >> m;

    vector<vector<ll>> table(h + 2, vector<ll>(w + 2, -2));

    rep(y, 1, w + 1) rep(x, 1, h + 1) table[x][y] = 0;

    rep(i, 0, n) {
        ll a, b;
        cin >> a >> b;
        table[a][b] = -1;
    }

    rep(i, 0, m) {
        ll c, d;
        cin >> c >> d;
        table[c][d] = -2;
    }


    rep(y, 1, w + 1) {
        rep(x, 1, h + 1) {
            if(table[x][y] == -1){
                for(ll i=x+1; table[i][y] >= 0; i++){
                    table[i][y] += 1;
                }
                for(ll i=x-1; table[i][y] >= 0; i--){
                    table[i][y] += 1;
                }
                for(ll i=y+1; table[x][i] >= 0; i++){
                    table[x][i] += 1;
                }
                for(ll i=y-1; table[x][i] >= 0; i--){
                    table[x][i] += 1;
                }
            }
        }
    }

    //rep(y, 0, w + 2) {rep(x, 0, h + 2) {printf("%2lld ", table[x][y]);}cout << endl;}

    ll ans = 0;

    rep(y, 1, w + 1) {
        rep(x, 1, h + 1) {
            if(table[x][y] == -1 or table[x][y] >= 1)
                ans++;
        }
    }

    put(ans);
}
