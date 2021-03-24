//pdfmita

#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << fixed << i << endl
#define putl(a)                        \
    for (auto q : a) cout << q << ' '; \
    cout << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    ll ans1 = 0;
    ll sum = 0;
    ll pre = 1e10;
    //偶数が正
    rep(i, 0, n) {
        sum += a[i];
        if (i % 2 == 0) {
            if (sum < 0) {
                ans1 += abs(sum) + 1;
                sum += abs(sum) + 1;
            }
            if(sum == 0) ans1++, sum++;
        } else {
            if (sum > 0) {
                ans1 += abs(sum) + 1;
                sum -= abs(sum) + 1;
            }
            if(sum == 0) ans1++, sum--;
        }
        pre = sum;
    }

    ll ans2 = 0;
    sum = 0;
    pre = 1e10;
    //偶数が奇
    rep(i, 0, n) {
        sum += a[i];
        if (i % 2 == 1) {
            if (sum < 0) {
                ans2 += abs(sum) + 1;
                sum += abs(sum) + 1;
            }
            if(sum == 0) ans2++, sum++;
        } else {
            if (sum > 0) {
                ans2 += abs(sum) + 1;
                sum -= abs(sum) + 1;
            }
            if(sum == 0) ans2++, sum--;
        }

        if (sum == 0 and signbit(pre)) sum++, ans2++;
        else if (sum == 0 and not signbit(pre)) sum--, ans2++;
        pre = sum;
    }

    put(min(ans1, ans2));
}
