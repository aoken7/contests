#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    
    s.push_back(s[0]);

    rep(i,1,s.size()){
        cout << s[i];
    }
    cout << endl;
}
