#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    vector<vector<ll>> x(n), y(n);
    rep(i, 0, n){
        cin >> a[i];
        rep(j, 0, a[i]){
            ll s,t;
            cin >> s >> t;
            x[i].push_back(s);
            y[i].push_back(t);
        }
    }

    ll ans = 0;

    for (int bit = 0; bit < (1<<n); ++bit){
        /* bit で表される集合の処理を書く */
        int mujyun = 1;
        vector<int> S, flag(n,0);
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
                flag[i] = 1;
            }
        }

        for(int i = 0; i < n; i++){
            if(flag[i]){
                for(int j = 0; j < a[i]; j++){
                    if(flag[x[i][j]-1] != y[i][j]){
                        mujyun = 0;
                    }
                }
            }
        }
        if(mujyun){
            ll cnt = 0;
            for(auto z:flag){
                if(z) cnt++;
            }
            ans = max(ans, cnt);
        }
    }
    put(ans);
}