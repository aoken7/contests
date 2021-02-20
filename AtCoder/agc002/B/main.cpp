#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> x(m), y(m);
    rep(i,0,m) cin >> x[i] >> y[i];
    
    vector<bool> flag(n+1,false);
    vector<ll> num(n+1,1);

    flag[1] = true;
    rep(i,0,m){
        if(flag[x[i]] and !flag[y[i]]){
            flag[y[i]] = true;
            num[x[i]]--;
            num[y[i]]++;
        }else if(flag[x[i]] and flag[y[i]]){
            num[x[i]]--;
            num[y[i]]++;
        }else if(!flag[x[i]] and flag[y[i]] and num[y[i]] == 0){
            flag[y[i]] = false;
            num[x[i]]--;
            num[y[i]]++;
        }else{
            num[x[i]]--;
            num[y[i]]++;
        }
    } 

    ll ans = 0;
    rep(i,1,n+1){
        if(flag[i] > 0 and num[i] > 0) ans++;
    }
    put(ans);
}
