#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    if (s.size() == 1){
        put(s+s+s+s+s+s);
    }else if(s.size() == 2){
        put(s + s + s);
    }else{
        put(s+s);
    }
}
