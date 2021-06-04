#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;

    string t;

    reverse(all(s));

    rep(i,0,s.size()){
        if(s[i] == '6') t.push_back('9');
        else if(s[i] == '9') t.push_back('6');
        else t.push_back(s[i]);
    }
    put(t);
}
