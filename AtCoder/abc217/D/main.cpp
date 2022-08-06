#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll l, q;
    cin >> l >> q;
    
    set<ll> st;
    st.insert(0);
    st.insert(l);

    rep(i,0,q){
        ll c, x;
        cin >> c >> x;

        if (c == 1){
            st.insert(x);
        }else{
            auto it = st.lower_bound(x);
            if (it != st.end()){
                cout << *it - *--it << endl;
            }
        }
    }
}
