#include<bits/stdc++.h>
#include<atcoder/all>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto q:a)cout<<q<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll b, c; cin >> b >> c;

    ll ans = 1;
    if(b>0 and b<c) ans--;
    else if(b==0) ans++; 
    ans += c / 2; //マイナス方向に伸びる
    //put(ans);
    ans += (c-1) / 2; //プラス方向に伸びる
    //put(ans);
    if(b < c)ans += abs(b) * 2;
    //else ans += (c-2) / 2; //二回反転してやつ
    
    put(ans);
}
