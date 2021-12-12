#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll a, b, c, d; 
    cin >> a >> b >> c >> d;

    ll ans = 0;
    ll red = 0;
    ll blue = a;

    for(;;){
        if(blue <= red * d) break;
        blue += b;
        red += c;
        ans++;
        
        if(ans > 100000 and b >= c){
            put(-1);
            return 0;
        }
    }   

    put(ans);
}
