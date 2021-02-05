//他人の解答見た
#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, k; cin >> n >> k;

    ll ans = 0;

    if(k==0){
        put(n*n);
        return 0;
    }

    rep(i,k+1,n+1){
        ans += max(0LL,(n/i)*(i-k));
        ans += max(n%i-k+1,0LL);
    }

    put(ans);
}
