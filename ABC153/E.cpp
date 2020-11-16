#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll hp, len_n; cin >> hp >> len_n;
    vector<ll> atk_a(len_n), mp_b(len_n);
    rep(i, len_n) cin >> atk_a[i] >> mp_b[i];

    vector<ll> rate_c(len_n);
    ll max_index = 0;
    for(ll i=0; i<len_n; i++){
        rate_c[i] = atk_a[i] / (double)mp_b[i];
        if (rate_c[i] > rate_c[max_index]){
            max_index = i;
        }
    }

    ll mp_ans = 0;
    mp_ans = hp / atk_a[max_index] * mp_b[max_index];
    put(mp_ans);
    if (hp % atk_a[max_index] != 0) {
        hp = hp % atk_a[max_index];
        ll min_index = max_index;
        for(ll i=0; i<len_n; i++){
            if (atk_a[i] >= hp and mp_b[min_index] >= mp_b[i]){
                min_index = i;
            }
        }
        put(hp);
        put(atk_a[min_index]);
        put(mp_b[min_index]);
        mp_ans += mp_b[min_index];
    }

    put(mp_ans);
}