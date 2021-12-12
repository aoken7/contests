#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll cnt = 0;

    rep(i,1,1e9){
        cnt += i;
        if(cnt >= n){
            put(i);
            return 0;
        }
    }

}
