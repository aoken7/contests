#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];

    map<ll,ll> mp;
    ll flag = 1;
    ll setwise_prime = a[0];
    rep(i,1,n){
        setwise_prime = __gcd(setwise_prime,a[i]);
        //if(setwise_prime!=1) flag = 1;
        if(!flag) continue;
        auto x = divisor(a[i]);
        for(auto y:x){
            mp[y]++;
            if(y!=1 and mp[y] > 1){
                flag = 0;
            }
        }
    }

    if(flag){
        put("pairwise coprime");
    }else if(setwise_prime==1){
        put("setwise coprime");
    }else{
        put("not coprime");
    }

}
