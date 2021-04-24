#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll q;
    cin >> q;

    ll flag = 1;  //-1dekaitenn

    rep(i, 0, q) {
        ll t, a, b;
        cin >> t >> a >> b;

        if (t == 1) {
            if (flag == -1) {
                if (a > n)
                    a -= n;
                else if (a <= n)
                    a += n;
                if (b > n)
                    b -= n;
                else if (b <= n)
                    b += n;
            }
            swap(s[a - 1], s[b - 1]);
        } else {
            flag *= -1;
        }
    }

    if (flag == -1) {
        string t = s.substr(n, n);
        string u = s.substr(0, n);

        s = t + u;
    }
    put(s);
}
