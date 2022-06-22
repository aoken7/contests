#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

vector<vector<ll>> g;
ll a, n;
vector<ll> flag;

ll maxn = 1e7;

ll func(ll x) {
    auto s = to_string(x);
    auto c = s[s.size() - 1];
    s.pop_back();
    return stoll(c + s);
}

void dfs(ll x) {
    if (x > 10 and x % 10 != 0) {
        ll tmp = func(x);
        if (tmp <= maxn and flag[tmp]) {
            g[x].push_back(tmp);
            //g[tmp].push_back(x);
            flag[tmp] = 0;
            dfs(tmp);
        }
    }
    ll tmp = x * a;
    if (tmp <= maxn and flag[tmp]) {
        flag[tmp] = 0;
        g[x].push_back(tmp);
        //g[tmp].push_back(x);
        dfs(tmp);
    }
}

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    cin >> a >> n;

    g = vector<vector<ll>>(maxn + 1);
    flag = vector<ll>(maxn + 1, 1);

    dfs(1);

    vector<ll> l(maxn + 1, 1e9);
    queue<ll> q;
    l[1] = 0;
    q.push(1);
    while (!q.empty()) {
        ll top = q.front();
        q.pop();

        for (auto x : g[top]) {
            if (l[x] > l[top] + 1) {
                l[x] = l[top] + 1;
                q.push(x);
            }
        }
    }

    if (l[n] == 1e9) {
        put(-1);
    } else {
        put(l[n]);
    }

}