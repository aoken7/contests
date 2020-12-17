//pdfmita

#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;

    rep(i,1,s.size()){
        if(s[i] == s[i-1]){
            cout << i << " " << i + 1 << endl;
            return 0;
        }
    }
    rep(i,2,s.size()){
        if(s[i] == s[i-2]){
            cout << i - 1<< " " << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << " " << -1 << endl;
}