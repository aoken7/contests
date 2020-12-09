#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

string fun(ll n){
    if (n == 0){
        return "P";
    }
    return "B" + fun(n-1) + "P" + fun(n-1) + "B";
}

int main(){
    ll n, x; cin >> n >> x;
    put(fun(n).size());
}