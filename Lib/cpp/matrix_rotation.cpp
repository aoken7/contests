#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

//<lib>
//<prefix>matrix_rotation
vector<string> rotation(vector<string> s) {
    ll w = s[0].size();
    ll h = s.size();
    vector<string> t(s[0].size());
    rep(y, 0, w) {
        rep(x, 0, h) { t[y].push_back(s[h - 1 - x][y]); }
    }
    return t;
}
//<lib/>

int main() {}