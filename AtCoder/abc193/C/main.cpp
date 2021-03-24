#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

long long pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

set<ll> st;

int main(){
    ll n; cin >> n;
        
    for(ll i=2; i<=min(ll(1e5),n); i++){
        for(ll j=2; j<=min(ll(1e5),n); j++){
            ll tmp = pow(i,j);
            if(tmp > n){
                j = 1e5+1;
                break;
            }
            st.insert(tmp);
        }
    }
    put(n-st.size());
}   
