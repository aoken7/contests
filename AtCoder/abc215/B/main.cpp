#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    for (ll i = 0;; i++) {
        if (powl(2, i) > n){
            put(i - 1);
            break;
        }
    }
}
