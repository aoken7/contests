#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

vector<ll> dfs(ll x){
    vector<ll> ret;
    if(x*10 + 7 < 1e9){
        auto a = dfs(x*10+7);
        ret.push_back(x*10+7);
        ret.insert(ret.end(),a.begin(),a.end());
    }
    if(x*10 + 5 < 1e9){
        auto a = dfs(x*10+5);
        ret.push_back(x*10+5);
        ret.insert(ret.end(),a.begin(),a.end());
    }
    if(x*10 + 3 < 1e9){
        auto a = dfs(x*10+3);
        ret.push_back(x*10+3);
        ret.insert(ret.end(),a.begin(),a.end());
    }
    return ret;
}

int main(){
    ll n; cin >> n;
    vector<ll> a = dfs(0);

    ll ans = 0;

    vector<ll> b;

    for(ll i=0; i<a.size(); i++){
        ll f1=0, f2=0, f3=0;
        ll x = a[i];
        while(x > 0){
            if(x % 10 == 3) f1 = 1;
            else if(x % 10 == 5) f2 = 1;
            else if(x % 10 == 7) f3 = 1;
            x /= 10;
        }
        if(f1+f2+f3 == 3) b.push_back(a[i]);
    }

    sort(all(b));
    
    for(auto x:b){
        if(x <= n) ans++;
        else break;
    }

    put(ans);
}