#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    deque<char> q;

    rep(i,0,n){
        char tmp; cin >> tmp;
        q.push_back(tmp);
        ll size = q.size();
        if(size > 2 and q[size-1] == 'x' and q[size-2] == 'o' and q[size-3] == 'f'){
            q.pop_back();
            q.pop_back();
            q.pop_back();
        }
    }

    put(q.size());
}