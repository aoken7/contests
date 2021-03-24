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

    //string t;
    vector<ll> t;
    ll num = 0;
    rep(i, 0, s.size()) {
        if (s[i] == '0') {
            num++;
        } else {
            if (num > 0) {
                t.push_back(num);
                num = 0;
            }
            t.push_back(0);
        }
    }
    if (num > 0) t.push_back(num);

    queue<ll> q;
    ll l = 0, r = 0;
    ll ans = 0;
    ll tmp = 0;
    ll sum = 0;
    for (; r < t.size(); r++) {
        if (t[r] == 0) {
            tmp++;
            sum++;
        } else {
            if (q.size() == k) {
                sum -= q.front();
                q.pop();
            }
            sum += t[r];
            tmp += t[r];
            q.push(tmp);
            tmp = 0;
        }

        ans = max(ans, sum);
    }

    put(ans);
}
