#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> x(n);
    rep(i,0,n) cin >> x[i];

    ll sum = 0;

    rep(i,0,n){
        if(abs(x[i]-k) < x[i]){
            sum += abs(x[i]-k) * 2;
        }else{
            sum += x[i] * 2;
        }
    }

    put(sum);
}