#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    if(n >= 42) n++;
    if(n < 10){
        cout << "AGC00" << n << endl;
    }else{
        cout << "AGC0" << n << endl;
    }
}
