#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    vector<string> st_p, st_t = {"ABC", "ARC", "AGC", "AHC"};
    rep(i, 0, 3) st_p.push_back([]() {
        string s;
        cin >> s;
        return s;
    }());
    sort(all(st_t));
    sort(all(st_p));
    rep(i, 0, 3) if (st_p[i] != st_t[i]) {
        put(st_t[i]);
        return 0;
    }
    put("ARC");
}
