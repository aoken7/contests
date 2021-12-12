//解説みて回答
#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll q; cin >> q;

    ll n = powl(2,20);

    vector<ll> a(n,-1);

    set<ll> st;
    rep(i, 0, n) { st.insert(i); }

    rep(i,0,q){
        ll t, x;
        cin >> t >> x;

        ll h = x;
        if(t == 1){
            if(a[h%n]==-1){
                a[h%n] = h;
                st.erase(h%n);
            }else{
                auto s = st.lower_bound(h%n);
                if(s == st.end()){
                    s = st.lower_bound(0);
                }
                a[*s] = x;
                st.erase(*s);

            }
        }else{
            put(a[x % n]);
        }
    }
}
