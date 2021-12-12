#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

ll n;
vector<ll> a;

int main(){
    cin >> n;
    a = vector<ll>(n);
    rep(i,0,n) cin >> a[i];

    set<ll> st, l, r;
    set<pair<ll,ll>>cnt;

    rep(i,0,floor(n / 2)){
        if(a[i] != a[n-i-1]){
            cnt.insert({min(a[i], a[n-i-1]), max(a[i], a[n-i-1])});
            st.insert(a[i]);
            st.insert(a[n-i-1]);
            l.insert(a[i]);
            r.insert(a[n-1-i]);
        }
    }

    if(st.empty()){
        put(0);
        return 0;
    }

    put(min({ll(st.size()-1), ll(cnt.size())}));
}
