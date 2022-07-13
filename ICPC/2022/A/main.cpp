#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    for (;;) {
        ll n;
        cin >> n;

        if (n == 0) break;

        vector<ll> v(n);
        rep(i, 0, n) cin >> v[i];

        ll ans = 0;
        rep(i,1,n-1) {
            if(v[i-1] < v[i] and v[i] > v[i+1]){
                ans++;
            }
        }

        put(ans);
    }
}