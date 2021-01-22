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

    priority_queue<ll> q;
    string tmp;
    for(auto c:s){
        if(c=='A' or c=='C' or c=='T' or c=='G'){
            tmp.push_back(c);
        }else{
            q.push(tmp.size());
            tmp = "";
        }
    }
    q.push(tmp.size());

    put(q.top());
}
