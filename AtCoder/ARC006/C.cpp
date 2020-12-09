#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> w(n); rep(i,n) cin >> w[i];

    vector<stack<ll>> s;

    for(ll i=0; i<n; i++){
        ll mindiff = 1e9;
        ll minIdx = -1;
        for(ll j=0; j<s.size(); j++){
            ll diff = s[j].top() - w[i];

            if(diff > -1 and diff <= mindiff){
                minIdx = j;
                mindiff = diff;
            }
        }

        if (minIdx < 0){
            stack<ll> tmp;
            tmp.push(w[i]);
            s.push_back(tmp);
        }else{
            s[minIdx].push(w[i]);
        }
    }

    put(s.size());
}