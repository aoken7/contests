//他人の解答見た
//わがんね(´・ω・`)
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll bz = 1, bo = 1;
    rep(i,1,n+1){
        string s;
        cin >> s;
        if(s=="AND"){
            bz = 2 * bz + bo;
        }else{
            bo = 2 * bo + bz;
        }
    }

    put(bo);
}
