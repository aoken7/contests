#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll v,t,s,d; cin >> v >> t >> s >> d;

    if(d >= v*t and d <= v*s){
        put("No");
    }else{
        put("Yes");
    }
}
