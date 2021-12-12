#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> x(n), y(n);
    rep(i,0,n) cin >> x[i] >> y[i];

    ll cnt = 0;

    rep(i,0,n){
        rep(j,i+1,n){
            rep(k,j+1,n){
                ll l = (x[j] - x[i]) * (y[k] - y[i]);
                ll r = (y[j] - y[i]) * (x[k] - x[i]);
                if(l == r){
                    cnt++;
                    //cout << l << endl;
                    //cout << r << endl;
                }
            }
        }
    }

    ll ans = n * (n-1) * (n-2) / 6;
    put(ans - cnt);
}
