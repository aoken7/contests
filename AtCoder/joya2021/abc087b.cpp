#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll a, b, c, x;
    cin >> a >> b >> c >> x;

    ll ans = 0;

    rep(i,0,a+1){
        rep(j,0,b+1){
            rep(k,0,c+1){
                if(500*i + 100*j + 50*k == x){
                    ans++;
                }
            }
        }
    }
    put(ans);
}