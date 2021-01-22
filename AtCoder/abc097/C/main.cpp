#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define debug(i) cerr<<fixed<<i<<endl;
#define debugl(a) for(auto x:a)cerr<<x<<' '; cout<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    ll k; cin >> k;

    set<string> st;

    rep(i,0,s.size()+1){
        rep(j,0,s.size()+1){
            if(j > k) break;
            //put(s.substr(i,i+j));
            st.insert(s.substr(i,j));
        }
    }

    vector<string> a;
    for(auto x:st) a.push_back(x);

    //debugl(a);
    put(a[k]);
}
