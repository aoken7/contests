#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, k; cin >> n >> k;
    ll t[8][8];
    rep(i,n){
        rep(j,n){
            cin >> t[j][i];
        }
    }

    ll ans = 0;
    deque<ll> per;
    for(ll i=2; i<=n; i++){ per.push_back(i); }

    do {
        ll sumn = 0;
        auto q = per;
        q.push_front(1);
        q.push_back(1);

        for(ll i=0; i<n; i++){
            sumn += t[q[i]-1][q[i+1]-1];
        }

        if (sumn == k) ans++;

    } while (std::next_permutation(per.begin(), per.end()));

    put(ans);
}