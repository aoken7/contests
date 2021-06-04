#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout << i << endl
#define rep(i, s, n) for (long long i = s; i < (long long)(n); i++)
using namespace std;
using ll = long long;

ll n;
vector<ll> a;
ll q;
vector<ll> b;


int solve(ll x){
    ll ans = 1e9;
    rep(i,0,n){
        ll tmp = abs(a[i] - x);
        ans = min(ans, tmp);
    }
    return ans;
}

int megru_search() {
    ll ok = n-1;        //最小値求めるときは ok = MAX
    ll ng = 0;          //                   ng = -1
    ll cnt = a[ok];
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        if (a[ok] > cnt) {
            ok = mid;
        } else {
            ng = mid;
        }
        cnt = a[mid];
    }
    return ok;
}

int main() {
    cin >> n;
    a = vector<ll>(n);

    rep(i, 0, n) cin >> a[i];

    cin >> q;
    b = vector<ll>(q);
    rep(i, 0, q) cin >> b[i];

    sort(all(a));

    rep(i,0,q){
        put(solve(b[i]));
    }

    put(megru_search())
}

/*
 * a 1 2 3 4 5 6 7
 * b 3 4 5
 *   
 * a - b[0]
 * 2 1 0 1 2 3 4 
 * 
*/