//解説AC
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    string s;
    cin >> s;
    ll k;
    cin >> k;

    ll left = 0, right = 0;
    ll ans = 0;
    ll use_k = 0;

    vector<ll> memo(s.size() + 1, 0);
    rep(i, 0, memo.size() - 1) {
        memo[i + 1] = memo[i];
        if (s[i] == '.') memo[i + 1]++;
    }

    //[l,r]
    for (ll l = 0; l <= s.size() - 1; l++) {
        while (right <= s.size() - 1 && memo[right + 1] - memo[l] <= k) {
            right++;
        }
        ans = max(ans, right - l);
    }

    put(ans);
}
