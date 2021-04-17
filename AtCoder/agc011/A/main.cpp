#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n, c, k;
    cin >> n >> c >> k;
    vector<ll> t(n);
    rep(i,0,n) cin >> t[i];

    ll ans = 0;
    queue<ll> q;

    sort(all(t));

    ll cnt = 0;
    ll T = -1e9-10;

    rep(i,0,n){
        if(cnt == c or T + k < t[i]){
            //cout << i << endl;
            ans++;
            T = t[i];
            cnt = 1;
        }else{
            cnt++;
        }
    }

    //if(q.size() > 0) ans++;

    put(ans);
}
