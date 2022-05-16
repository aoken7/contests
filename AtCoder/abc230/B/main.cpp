#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    string t(20,'x');
    for(ll i=0; i<t.size(); i+=3) t[i] = 'o';

    auto pos = t.find(s);
    if(pos != string::npos){
        put("Yes");
    }else{
        put("No");
    }
}
