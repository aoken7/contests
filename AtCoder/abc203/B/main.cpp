#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, k; cin >> n >> k;

    ll ans = 0;
    rep(i,1,n+1){
        rep(j,1,k+1){
            ans += 100 * i + j;
        }
    }
    put(ans);
}
