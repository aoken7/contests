#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,0,h) cin >> s[i];

    vector<pair<ll,ll>> p;
    rep(y,0,h){
        rep(x,0,w){
            if(s[y][x] == 'o'){
                p.push_back({x,y});
            }
        }
    }

    ll ans = abs(p[0].first - p[1].first) + abs(p[0].second - p[1].second);
    put(ans);
}
