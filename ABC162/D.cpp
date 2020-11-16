#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    string s; cin >> s;

    ll ans = 0;

    for(ll i=0; i<n-2; i++){
        for(ll j=i+1; j<n-1; j++){
            for(ll k=j+1; k<n; k++){
                if(s[i] != s[j] and s[i] != s[k] and s[j] != s[k] and j-i != k-j){
                    ans++;
                }
            }
        }
    }
    put(ans);
}