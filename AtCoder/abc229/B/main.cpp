#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    for (; a > 0 and b > 0;) {
        ll a_top = a % 10;
        ll b_top = b % 10;
        a /= 10;
        b /= 10;
        
        if (a_top + b_top >= 10){
            put("Hard");
            return 0;
        }
    }

    put("Easy");
    return 0;
}
