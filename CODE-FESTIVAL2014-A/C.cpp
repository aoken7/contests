#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

bool uru(ll x){
    if (x % 400 == 0) return true; 
    else if(x % 100 == 0) return false;
    else if (x % 4 == 0) return true;
    else return false;
}    

int main(){
    ll a, b; cin >> a >> b;

    ll s = 4;
    for(ll i=a; i<=b; i++){
        if(uru(i)) {
            s = i;
            break;
        }
    }
    ll e = 0;
    for(ll i=b; i>=a; i--){
        if(uru(i)){
            e = i;
            break;
        }
    }

    ll ans = e / 4;
    ans -= e / 100;
    ans += e / 400;
    s--;
    ans -= s / 4;
    ans += s / 100;
    ans -= s / 400;

    put(ans);
}