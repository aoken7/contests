#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, a, x, y;
    cin >> n >> a >> x >> y;

    ll ans = 0;

    rep(i,0,n){
        if(i < a)
            ans += x;
        else
            ans += y;
    }

    put(ans);
}
