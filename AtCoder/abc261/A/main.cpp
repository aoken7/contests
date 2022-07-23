#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    vector<ll> a(101,0), b(101,0);
    for(ll i=l1; i<=r1; i++){
        a[i]++;
    }
    for(ll i=l2; i<=r2; i++){
        b[i]++;
    }

    ll ans = 0;
    rep(i,0,101){
        if (a[i] > 0 and b[i] > 0) ans++;
    }

    put(max(0LL,ans-1));
}
