#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n,m; cin >> n >> m;
    vector<ll> a(n); rep(i,n) cin >> a[i];
    vector<pair<ll,ll>> b(m); rep(i,m) { 
        cin >> b[i].second >> b[i].first;
        b[i].first *= -1;
    }

    priority_queue<ll,vector<ll>,greater<ll>> q;
    rep(i,n){ q.push(a[i]); }

    sort(all(b));

    rep(i,m){
        rep(j,b[i].second){
            ll top = q.top(); q.pop();
            //cout << "top:" << top << " b:" << b[i].first * -1 << endl;
            if(top >= b[i].first * -1){
                ll ans = 0;
                q.push(top);
                while(!q.empty()){
                    ans += q.top(); q.pop();
                }
                cout << ans << endl;
                return 0;
            }else{
                q.push(b[i].first * -1);
            }
        }
    }

    ll ans = 0;
    while(!q.empty()){
        ans += q.top(); q.pop();
    }
    cout << ans << endl;
    return 0;
}