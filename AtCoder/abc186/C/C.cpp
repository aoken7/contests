
#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

ll check(string s){
    for(auto x:s){
        if(x == '7') return 0;
    }
    return 1;
}

int main(){
    ll n; cin >> n;

    ll ans = 0;

    rep(i,1,n+1){
        stringstream ss;
        ss << oct << i;
        string s = ss.str();
        if(check(s) and check(to_string(i))) ans++;

    }

    put(ans);
}