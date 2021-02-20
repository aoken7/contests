#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, m, k; cin >> n >> m >> k;
    
    rep(i,0,n+1){
        rep(j,0,m+1){
            ll s = n * m;
            s -= i * m;
            s -= j * (n-i);
            s += j * i;
            if(s == k){
                put("Yes");
                return 0;
            }
        }
    }


    put("No");
    return 0;
}
