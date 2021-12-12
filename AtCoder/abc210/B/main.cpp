#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    string s; cin >> s;

    rep(i,0,s.size()){
        if(s[i] == '1'){
            if(i%2 == 1) put("Aoki");
            else put("Takahashi");
            return 0;
        }
    }
}
