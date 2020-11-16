#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n); rep(i,n) cin >> a[i];

    sort(all(a));

    ll ans = -1;
    for(ll i=n-1; i>0; i--){
        for(ll j=0; j<n; j++){
            
        }
    }
}