#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    string s; cin >> s;

    ll ans = 1e9;

    ll white_r = 0, black_r = 0; 
    rep(i, 0, n){
        if (s[i] == '#') {
            black_r++;
        }else{
            white_r++;
        }
    }
    
    ll white_l = 0, black_l = 0;
    rep(i, 0, n){
        ans = min(ans, black_l+white_r);
        
        if (s[i] == '#') {
            black_l++;
            black_r--;
        }else{
            white_l++;
            white_r--;
        }

        ans = min(ans, black_l+white_r);
    }

    put(ans);
}