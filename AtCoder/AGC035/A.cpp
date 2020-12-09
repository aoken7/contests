#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    deque<ll> a(n);
    rep(i,0,n) cin >> a[i];

    a.insert(a.end(), a.begin(), a.end());


    for(ll i=1; i<a.size()-1; i++){
        if(ll(a[i-1] xor a[i+1]) != a[i]){
            put("No");
            return 0;
        }
    }

    put("Yes");
}