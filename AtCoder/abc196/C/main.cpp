#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    vector<ll> num;

    rep(i,1,sqrt(n)+1){
        string s = to_string(i);
        num.push_back(stol(s+s));
    }

    ll ans = 0;

    for(auto x:num){
        if(x <= n) ans++;
    }

    put(ans);
}
