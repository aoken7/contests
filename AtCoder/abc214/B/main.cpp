#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll s, t;
    cin >> s >> t;

    ll ans = 0;

    rep(i,0,101){
        rep(j,0,101){
            rep(k,0,101){
                if (i + j + k <= s and i*j*k <=t) ans++;
            }
        }
    }

    put(ans);
}
