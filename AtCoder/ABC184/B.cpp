#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n, x; cin >> n >> x;
    string s; cin >> s;

    rep(i,0,n){
        if(s[i] == 'o') x++;
        else x = max(x-1,0LL);
    }

    put(x);
}