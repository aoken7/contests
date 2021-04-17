#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

bool IsPrime(int num) {
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;  // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = 1;

    vector<ll> v;

    for (ll i = 1; i <= 2e5; i++) {
        ll flag = 0;
        for (ll j = 1; j <= min(b, ll(2e5)); j++) {
            if (i * j > b) break;
            if (a <= i * j and i * j <= b) {
                flag++;
            }
            if (flag > 1) {
                ans = i;
            }
        }
    }

    put(ans);
}
