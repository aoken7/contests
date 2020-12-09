#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;


vector<ll> v;
ll sum = 0;

ll f(ll d = 0, ll s = 0){
    if(d > 3) return 0;
    if(sum -s  == s) return 1;
    return f(d+1, s + v[d]) + f(d+1, s);
}

int main(){
    ll a, b, c, d; cin >> a >> b >> c >> d;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sum = a + b + c + d;

    if(f()) put("Yes");
    else put("No");
}