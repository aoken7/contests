#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; 
    cin >> n;
    ll ans = 2;
    if (n == 0){
        put(1);
        return 0;
    }
    rep(i,0,n-1){
        ans *= 2;
    }
    put(ans);
}
