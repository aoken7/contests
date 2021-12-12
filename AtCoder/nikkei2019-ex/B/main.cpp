#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    if(n == 1){
        put(1);
    }else if(n == 2){
        put(1);
    }

    rep(i,0,n){
        if(i * i > n){
            put(i-1);
            return 0;
        }
    }
}
