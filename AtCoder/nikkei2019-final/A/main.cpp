#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<ll> ans(n+1);

    rep(i,0,n){
        ll sum = 0;
        rep(j,i,n){
            sum += a[j];
            ans[j-i+1] = max(ans[j-i+1], sum);
        }
        
    }
    rep(i,1,n+1){
        put(ans[i]);
    }
}
