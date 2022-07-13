#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n, a, b;

int main() {
    cin >> n >> a >> b;

    ll sum = n * (n + 1) / 2;

    ll a_e = n / a * a;
    ll a_num = (a + a_e) * (n / a) / 2;

    ll b_e = n / b * b;
    ll b_num = (b + b_e) * (n / b) / 2;

    ll c = std::lcm(a, b);
    ll c_e = n / c * c;
    ll c_num = (c + c_e) * (n / c) / 2;

    ll ans = sum - a_num - b_num + c_num;

    put(ans);
}
