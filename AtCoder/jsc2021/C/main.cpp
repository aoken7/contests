#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = 1;
    /*
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
    }*/

    for(ll c = b; ;c--){
        //cout << "a+c-1/c:" << (a+c-1) / c << " b/c:" << b /c << endl;
        if((a+c-1) / c < b / c){
            put(c);
            return 0;
        }
    }

    //put(ans);
}
