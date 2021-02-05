#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, s, d; cin >> n >> s >> d;
    vector<ll> x(n), y(n);
    rep(i,0,n) cin >> x[i] >> y[i];

    rep(i,0,n){
        if(x[i] < s and y[i] > d){
            put("Yes");
            return 0;
        }
    }
    put("No");
}
