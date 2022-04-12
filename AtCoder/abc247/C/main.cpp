#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

string dfs(ll x){
    if (x == 1){
        return "1";
    }
    return dfs(x-1) + ' ' + to_string(x) + ' ' + dfs(x-1);
}

int main(){
    ll n; cin >> n;

    put(dfs(n));
}
