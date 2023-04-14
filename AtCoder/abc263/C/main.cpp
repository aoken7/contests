#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for(long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, m;

void dfs(vector<ll> v, ll tmp, ll l = 1) {
    v.emplace_back(tmp);
    if(l >= n) {
        // st.insert(x);
        for(auto c : v) {
            printf("%lld ", c);
        }
        printf("\n");
        return;
    }

    for(ll i = v[v.size() - 1] + 1; i <= m; i++) {
        dfs(v, i, l + 1);
    }
}

int main() {
    cin >> n >> m;
    for(ll i = 1; i <= m; i++) {
        dfs({}, i);
    }
}
