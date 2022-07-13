#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    for(;;){
        ll n; cin >> n;
        if (n == 0) break;

        vector<ll> d(n);
        rep(i,0,n) cin >> d[i];

        ll cnt = 0;
        rep(i,0,n-3){
            if(d[i]==2 and d[i+1]==0 and d[i+2]==2 and d[i+3]==0) cnt++;
        }
        put(cnt);
    }
}