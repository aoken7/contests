#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll r,c;
    cin >> r >> c;
    ll a[2][2];
    cin >> a[0][0] >> a[0][1];
    cin >> a[1][0] >> a[1][1];
    r--, c--;
    put(a[r][c]);
}
