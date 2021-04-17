#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    ll k;
    cin >> k;

    s.push_back('!');

    ll cnt = 0;
    rep(i, 0, s.size()) {
        ll tmp = 0;
        for (ll j = i + 1; j < s.size(); j++) {
            // cout << i << " " << j << endl;
            if (s[i] != s[j]) {
                if (tmp % 2 == 1) {
                    cnt += tmp;
                } else {
                    cnt += tmp / 2;
                }
                i = j - 1;
                break;
            }
            tmp++;
        }
    }

    s.pop_back();

    map<char, ll> mp;

    rep(i, 0, s.size()) { mp[s[i]]++; }

    if (mp.size() == 1) {
        put(s.size() * k / 2);
    } else {
        if (s[0] != s[s.size() - 1]) {
            put(cnt * k);
        } else {
            put(k * cnt - (floor()));
        }
    }
}
