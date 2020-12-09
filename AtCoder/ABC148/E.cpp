/*pdf見て回答
*これ緑ってマジ？
*何食べたら解けるようになるの(´・ω・`)
*/

#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    
    ll ans = 0;

    if (n % 2 == 0){
        for(ll i=10; i<=n; i*=5){
            ans += floorl(n / i);
        }
    }

    put(ans);
}