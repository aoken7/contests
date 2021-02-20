#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    rep(i,0,s.size()){
        if(i % 2 == 0){
            if(isupper(s[i])){
                put("No");
                return 0;
            }
        }else{
            if(!isupper(s[i])){
                put("No");
                return 0;
            }
        }
    }
    put("Yes");
}
