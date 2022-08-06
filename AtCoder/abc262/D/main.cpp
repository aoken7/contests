#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    for (int bit = 0; bit < (1 << n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1 << i)) {  // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        ll sum = 0;
        for (int i = 0; i < (int)S.size(); ++i) {
            sum += a[i];
        }
        if(S.size() > 0 and sum % S.size() == 0) {
            //cout << bitset<8>(sum) << endl;
            cout << sum << endl;
        }
    }
}
