#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, x;
    for(;;){
        cin >> n >> x;
        if(n+x == 0) break;

        ll ans = 0;

        rep(i,1,n-1){
            rep(j,i+1,n){
                rep(k,j+1,n+1){
                    if(i+j+k == x){
                        ans++;
                    }
                }
            }
        }

        put(ans);
    }
}