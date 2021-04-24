#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    string n; cin >> n;

    if(n[0] == '9' or n[1] == '9') put("Yes");
    else put("No");
}
