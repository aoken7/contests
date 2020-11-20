#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<" "; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<double> maxT(n), minT(n);
    rep(i,0,n) cin >> maxT[i] >> minT[i];

    vector<ll> ans(6,0);

    rep(i,0,n){
        double ma = maxT[i];
        double mi = minT[i];

        if (ma >= 35) ans[0]++;
        if(ma >= 30 and ma < 35) ans[1]++;
        if(ma >= 25 and ma < 30) ans[2]++;
        if(mi >= 25) ans[3]++;
        if(mi < 0 and ma >= 0) ans[4]++;
        if(ma < 0) ans[5]++;
    }

    for(ll i=0; i<6; i++){
        cout<<(i != 0 ? " " : "");
        cout << ans[i];
    }
    cout << endl;
}