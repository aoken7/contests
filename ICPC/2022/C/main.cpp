#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<vector<ll>> a;

void dfs(ll n, ll m, vector<ll> v) {
    if (n == 0 and m == 0) {
        a.push_back(v);
        return;
    }
    if (n > 0) {
        auto v2 = v;
        v2.push_back(1);
        dfs(n - 1, m, v2);
    }
    if (m > 0) {
        v.push_back(0);
        dfs(n, m - 1, v);
    }
}

ll score(vector<ll> v) {
    ll ret = 0;
    ll cnt = 1;
    if (!v[0])
        ret = -1;
    else
        ret = 1;

    rep(i, 1, v.size()) {
        if (v[i - 1] == v[i]) {
            cnt++;
            if (!v[i - 1]) {
                ret -= 2 * cnt - 1;
            } else {
                ret += 2 * cnt - 1;
            }
        } else {
            cnt = 1;
            if (!v[i]) {
                ret -= 1;
            } else {
                ret += 1;
            }
        }
    }
    return ret;
}

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    for (;;) {
        ll n, m;
        cin >> n >> m;


        a = vector<vector<ll>>();

        if (n + m == 0) break;;

        dfs(n, m, {});

        ll ans = -1e9;
        vector<ll> tmp;
        for (auto x : a) {
            ll s = score(x);
            //put(s);
            if (ans < s) {
                ans = s;
                tmp = x;
            }
        }

        put(ans);
        // putl(tmp);
    }
}