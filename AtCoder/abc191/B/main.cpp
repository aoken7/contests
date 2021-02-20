#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    for(auto xx:a){
        if(xx == x) continue;
        cout << xx << " ";
    }
}
