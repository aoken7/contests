#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll t; cin >> t;

    vector<ll> ans;

    rep(i,0,t){
        ll n, s, k; cin >> n >> s >> k;
        map<ll,ll> st;  //set
        ll len = n-s;
        ll cnt = 0;

        while(1){
            //巡回したとき
            if(st.count(len)){
                ans.push_back(-1);
                break;
            }
            if(len % k == 0){
                ans.push_back((cnt*n + (n-s))/k);
                break;
            }
            st[len]++;
            len = n + (k- len % k);
            
            //cerr << len << endl;
            //if(st.size() > 1e3) break;
            for(auto x:st) cout << i << ":" << x.first << " "; cout << endl;
            cout << endl;
        }

    }
    cout << endl;

    for(auto x:ans) put(x);
}