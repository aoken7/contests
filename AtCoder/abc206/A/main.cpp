#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    double n; cin >> n;
    if(floor(n * 1.08) > 206) put(":(");
    else if(floor(n * 1.08) == 206.0) put("so-so");
    else put("Yay!");
}
