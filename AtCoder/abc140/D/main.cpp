//解説見た
#include <bits/stdc++.h>

#include <atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    string t="";
    ll tmpl = 0, tmpr = 0;
    for (auto x : s) {
        if (x == 'L') {
            if (tmpr > 0) {
                t.push_back('R');
                tmpr = 0;
            }
            tmpl++;
        } else {
            if (tmpl > 0) {
                t.push_back('L');
                tmpl = 0;
            }
            tmpr++;
        }
    }
    if (tmpr > 0)
        t.push_back('R');
    else
        t.push_back('L');

    if(ll(t.size())-k*2-1>=0) put((n-1)-(ll(t.size())-k*2-1));
    else put(n-1);
}
