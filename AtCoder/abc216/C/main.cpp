#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;

    string ans = "";
    
    while(n > 0){
        if (n % 2 == 1){ 
            n--;
            ans += 'A';
        }
        if (n == 1) break;
        n /= 2;
        ans += 'B';
    }

    ans.pop_back();

    reverse(all(ans));
    
    put(ans);
}
