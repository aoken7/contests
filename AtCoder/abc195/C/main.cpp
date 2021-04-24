//解説みた
#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n; 
    cin >> n;

    ll ans = 0;

    ans += max(0LL, n - ll(1e3-1));
    ans += max(0LL, n - ll(1e6-1));
    ans += max(0LL, n - ll(1e9-1));
    ans += max(0LL, n - ll(1e12-1));
    ans += max(0LL, n - ll(1e15-1));

    put(ans);
}
