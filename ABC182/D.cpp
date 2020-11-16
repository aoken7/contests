#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n); rep(i,n) cin >> a[i];

    vector<ll> dp(n+1,0);
    ll plus = 0;
    ll point = 0;
    ll ans = 0;
    rep(i,n){
        ans = max({ans, point, point + a[i], point + plus});
        point = point + a[i] + plus;
        ans = max({ans, point, point + a[i], point + plus});
        plus = plus + a[i];
        ans = max({ans, point, point + a[i], point + plus});
        //cout << "point:" << point << " plus:" << plus << " a:" << a[i] << endl;
        

        //ans = max({ans, point, point+a[i], point+plus});
    }
    //cout << "point:" << point << " plus:" << plus << endl;
        

    put(ans);
}