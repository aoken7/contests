#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

ll primeCheck(ll x){
    rep(i,2,sqrt(x)+1){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ll q; cin >> q;
    vector<ll> l(q), r(q);
    rep(i,0,q) cin >> l[i] >> r[i];

    ll n = *max_element(all(r))+1;

    vector<ll> num(n, 0), cSum(n+1, 0);

    for(ll i=3; i<=n; i+=2){
        if (primeCheck(i) and primeCheck((i+1) / 2)){
            num[i]++;
        }
    }


    rep(i, 0, n) cSum[i+1] = cSum[i] + num[i];

    rep(i, 0, q){
        if (r[i] == l[i]) cout << num[r[i]] << endl;
        else cout << cSum[r[i]+1] - cSum[l[i]] << endl;
    }

    //rep(i, 0, 20) cout << num[i] << " "; cout << endl; 
    //rep(i, 0, 20) cout << cSum[i] << " "; cout << endl; 
}