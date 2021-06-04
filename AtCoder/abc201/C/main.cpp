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

    vector<char> kaku;
    vector<char> batu;

    rep(i, 0, s.size()) {
        if (s[i] == 'o')
            kaku.push_back(i + '0');
        else if (s[i] == 'x')
            batu.push_back(i + '0');
    }

    vector<string> allnum(10000);

    rep(i, 0, 10000) {
        std::ostringstream ss;
        ss << std::setw(4) << std::setfill('0') << i;
        std::string s(ss.str());
        allnum[i] = s;
    }

    ll ans = 0;

    rep(i, 0, 10000) {
        auto s = allnum[i];
        ll cnt = 0;
        rep(j, 0, kaku.size()) {
            rep(k, 0, 4) {
                if (kaku[j] == s[k]) {
                    cnt++;
                    break;
                }
            }
        }

        if (cnt != kaku.size()) continue;

        cnt = 0;
        rep(j, 0, batu.size()) {
            rep(k, 0, 4) {
                if (batu[j] == s[k]) {
                    cnt = -1;
                    break;
                }
            }
        }
        if (cnt != -1) {
            ans++;
        }
    }

    put(ans);
}
