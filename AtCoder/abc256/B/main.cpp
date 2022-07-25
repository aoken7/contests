#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) { cin >> a[i], a[i]; }

    ll p = 0;
    deque<ll> d;
    vector<ll> b = {0, 0, 0, 0};
    rep(i, 0, n) {
        b[0] = 1;
        vector<ll> tmp = {0, 0, 0, 0};
        rep(j, 0, 4) {
            if (!b[j]) continue;
            if (a[i] + j > 3) {
                p += 1;
                b[j] = 0;
            } else {
                b[j] = 0;
                tmp[j + a[i]] = 1;
            }
        }

        b = tmp;
        //rep(j, 0, 4) { cout << b[j] << " "; }
        //cout << endl;
        //cout << endl;
    }

    put(p);
}
