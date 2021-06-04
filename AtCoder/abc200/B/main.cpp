#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, k; cin >> n >> k;

    rep(i,0,k){
        if(n%200 == 0){
            n /= 200;
        }else{
            string s = to_string(n);
            s += "200";
            n = stol(s);
        }
    }

    put(n);
}
