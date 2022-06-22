#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll func(ll x) {
    auto s = to_string(x);
    auto c = s[s.size() - 1];
    s.pop_back();
    return stoll(c + s);
}

int main() {
    ll a, n;
    cin >> a >> n;

    ll maxn = 1e7;

    queue<ll> q;
    vector<ll> l(maxn, 1e9);
    q.push(1);
    l[1] = 0;
    while (!q.empty()) {
        ll top = q.front();
        q.pop();
        if (top * a < maxn and l[top * a] > l[top] + 1) {
            l[top * a] = l[top] + 1;
            q.push(top * a);
        }

        if (top > 10 and top % 10 != 0) {
            ll tmp = func(top);
            if (tmp < maxn and l[tmp] > l[top] + 1) {
                l[tmp] = l[top] + 1;
                q.push(tmp);
            }
        }
    }

    if (l[n] == 1e9)
        put(-1);
    else
        put(l[n]);
}