#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string n; cin >> n;

    ll cnt = 0;

    rep(i,0,n.size()-2){
        if(n[i] == n[i+1] and n[i+1] == n[i+2]) cnt++;
    }

    put((cnt > 0 ? "Yes":"No"));
}
