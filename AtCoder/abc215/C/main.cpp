#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()
#define put(i) cout<<i<<endl
#define rep(i,s,n) for(long long i=s;i<(long long)(n);i++)
using namespace std;
using ll = long long;

template <typename T>
void putl(T t) {
    for (auto x : t) cout << x << " ";
    cout << endl;
}

int main(){
    string s; cin >> s;
    ll k; cin >> k;

    vector<string> st;

    sort(all(s));

    do{
        st.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    put(st[k-1]);
}
