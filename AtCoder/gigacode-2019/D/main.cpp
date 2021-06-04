#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll h, w, k, v;
int a[126][126];
//vector<vector<ll>> a(h,vector<ll>(w));

int main() {
    cin >> h >> w >> k >> v;
    rep(y, 0, h) rep(x, 0, w) cin >> a[y][x];

    cout << endl;

    rep(y, 0, h){ rep(x, 0, w){ cout << a[y][x] << " "; } cout << endl;}
}