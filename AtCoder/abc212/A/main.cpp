#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll a, b;
    cin >> a >> b;

    if(0 < a and b == 0) put("Gold");
    else if(a == 0 and 0 < b) put("Silver");
    else if(0 < a and 0 < b) put("Alloy");
}
