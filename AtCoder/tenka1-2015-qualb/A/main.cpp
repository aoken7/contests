#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll a0 = 100;
ll a1 = 100;
ll a2 = 200;

ll f(ll n) {
    if (n == 0) return 100;
    if (n == 1) return 100;
    if (n == 2) return 200;
    return f(n-1) + f(n-2) + f(n-3);
}

int main() {
    put(f(19));
}