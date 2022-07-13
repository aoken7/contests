#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
//解説AC
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n;
    cin >> n;

    ll ans = 0;
    // iを固定してjの候補数を数える
    rep(i, 1, n + 1) {
        ll k = i;
        // iより小さい平方数？
        for (ll d = 2; d * d <= k; d++) {
            // iより小さい平方数でkを割る
            // i * kが平方数となる最小のkを求める
            for (; k % (d * d) == 0;) {
                k /= d * d;
            }
        }
        // i*kが平方数となるようなjはkに平方数をかけたもの
        for (ll d = 1; k * d * d <= n; d++) {
            ans++;
            //printf("i:%lld, k:%lld, d:%lld\n", i, k, d);
        }
    }

    put(ans);
}
