#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

int check5(ll x) {
    return x == 5;
}

int check7(ll x){
    return x == 7;
}

int main() {
    for (;;) {
        ll n;
        cin >> n;
        if (n == 0) break;

        vector<ll> w(n);
        rep(i, 0, n) {
            string s;
            cin >> s;
            w[i] = s.size();
        }

        rep(i,0,w.size()){
            ll tmp = 0;
            rep(j,i,w.size()){
                tmp += w[j];
                
        }
    }
}