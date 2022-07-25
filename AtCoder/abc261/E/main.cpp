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
    ll n, c;
    cin >> n >> c;
    vector<ll> t(n), a(n);
    rep(i, 0, n) cin >> t[i] >> a[i];

    vector<ll> memo(n + 1);
    memo[0] = c;

    rep(i, 0, n) {
        if (t[i] == 1) {
            memo[i+1] = memo[i] & a[i];

        } else if (t[i] == 2) {
            memo[i+1] = memo[i] | a[i];
        } else {
            memo[i+1] = memo[i] ^ a[i];
        }
    }

    putl(memo);

    ll x = c;

    cout << bitset<8>(x) << endl;
    rep(i, 0, n) {
        rep(j, 0, i + 1) {
            if (t[j] == 1) {
                cout << "    " << bitset<8>(x) << endl;
                x &= a[j];
                cout << "and " << bitset<8>(a[j]) << endl;
            } else if (t[j] == 2) {
                cout << "    " << bitset<8>(x) << endl;
                x |= a[j];
                cout << "or  " << bitset<8>(a[j]) << endl;
                ;
            } else {
                cout << "    " << bitset<8>(x) << endl;
                x ^= a[j];
                cout << "xor " << bitset<8>(a[j]) << endl;
            }
            cout << "    " << bitset<8>(x) << endl << endl;
            ;
        }
        put(x);
    }
}
