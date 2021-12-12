#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll fac(ll x){
    ll ans = 1;
    rep(i,1,x+1){
        ans *= i;
    }
    return ans;
}

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main(){
    ll p; cin >> p;

    set<ll> st;

    for(ll i = 1;;i++){
        ll tmp = fac(i);
        if(tmp > 1e7) break;
        st.insert(tmp);
    }

    vector<ll> v;
    for(auto x:st) v.push_back(x);

    sort(all(v), greater<ll>());

    ll ans = 0;

    rep(i,0,v.size()){
        rep(j,0,100){
            if(p < v[i]) break;
            p -= v[i];
            ans++;
        }
    }

    put(ans);
}
