#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    ll g = 0, p = 0;
    ll win = 0, lose = 0;
    rep(i, 0, s.size()) {
        if (p >= g) {
            g++;
            if (s[i] == 'p') lose++;
        } else {
            p++;
            if (s[i] == 'g') win++;
        }
    }
    put(win - lose);
}