#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl;
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    string s; cin >> s;

    ll ans = 0;
    vector<ll> a(3,0);

    rep(i,0,1000){
        a[2] = i % 10;
        a[1] = i / 10 % 10;
        a[0] = i / 10 / 10 % 10;
    }
}
