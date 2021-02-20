#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    
    s1.push_back('#');
    string token;
    rep(i,0,n){
        if(s1[i]==s1[i+1]){
            token+="-";
            i++;
        }else{
            token+="|";
        }
    }

    ll ans = 0;
    ll mod = 1e9+7;

    if(token[0]=='|') ans = 3;
    else ans = 6;

    rep(i,1,token.size()){
        if(token[i-1]=='|' and token[i]=='|') ans = ans * 2 % mod;
        else if(token[i-1]=='|' and token[i]=='-') ans = ans * 2 % mod;
        else if(token[i-1]=='-' and token[i]=='-') ans = ans * 3 % mod; 
    }

    put(ans);
}
