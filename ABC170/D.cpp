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
    vector<ll> flag(n,0);

    for(ll i=0; i<n; i++){
        for(ll j=n-1; a[j] >= a[i]*2; j--){
            if(a[j] % a[i] == 0){
                flag[j]++;
            }
        }
    }
    
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(!flag[i]) ans++;
    }

    for(auto x:flag) cout << x << " "; cout << endl;
    
    put(ans);
}