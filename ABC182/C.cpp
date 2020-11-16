#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

ll dfs(string n,  ll l){
    if(n.size() < 1) return -1;
    ll x = 0;
    rep(i,n.size()) x += (n[i] - '0');
    if (x % 3 == 0){
        return n.size();
    }

    ll ret = -1;
    for(ll i=1; i<=n.size(); i++){
        string t = n.substr(0,i-1) + n.substr(i,n.size());
        //put(t);
        ret = max(ret, dfs(t,l));
        if(ret == l-1) return ret;  
    }

    return ret;
}

int main(){
    string n; cin >> n;
    ll ans = dfs(n, n.size());
    if(ans == -1) put(-1);
    else put(n.size()-ans);
}