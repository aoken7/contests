#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for(long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

/*
DP？
累積和を使えばO(n^2)まで落とせるけど間に合わない
累積和＋尺取り？
数列を3分割する、どこで3分割すればいい？
LがRより小さい場合を考えると、Lで更新しないところは当然Rでも更新しなくてもよい


*/

template <typename T>
void putl(T t) {
    for(auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<ll> sleft(n + 1, 0), sright(n + 1, 0);
    rep(i, 0, n) {
        sleft[i + 1] = sleft[i] + a[i];
        sright[n - i - 1] = sright[n - i] + a[n - i - 1];
    }

    putl(sleft);
    putl(sright);
}
