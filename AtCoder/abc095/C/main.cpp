#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl;
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll a,b,c,x,y; cin >> a >> b >> c >> x >> y;

    ll ans = 1e18;

    for(ll i=0; i <= 1e6; i+= 2){
        ll tmp = 0;
        tmp = c * i;
        tmp += max((x-i/2) * a, 0LL);
        tmp += max((y-i/2) * b, 0LL);

        ans = min(ans, tmp);
    }

    put(ans);
}
