#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> r_rate(n), h_hand(n);
    rep(i, n) cin >> r_rate[i] >> h_hand[i];

    vector<vector<ll>> ans(n, vector<ll>(3,0));

    for(ll i=0; i<n-1; i++){
        for(ll j=i+1; j<n; j++){
            if (r_rate[i] > r_rate[j]){
                ans[i][0]++;
                ans[j][1]++;
            }else if(r_rate[i] == r_rate[j]){
                if(h_hand[i] == h_hand[j]){
                    ans[i][2]++;
                    ans[j][2]++;
                }else if(h_hand[i] == 1 and h_hand[j] == 3){
                    ans[i][1]++;
                    ans[j][0]++;
                }else if(h_hand[i] == 1 and h_hand[j] == 2){
                    ans[i][0]++;
                    ans[j][1]++;
                }else if(h_hand[i] == 2 and h_hand[j] == 1){
                    ans[i][1]++;
                    ans[j][0]++;
                }else if(h_hand[i] == 2 and h_hand[j] == 3){
                    ans[i][0]++;
                    ans[j][1]++;
                }else if(h_hand[i] == 3 and h_hand[j] == 1){
                    ans[i][0]++;
                    ans[j][1]++;
                }else if(h_hand[i] == 3 and h_hand[j] == 2){
                    ans[i][1]++;
                    ans[j][0]++;
                }
            }else{
                ans[i][1]++;
                ans[j][0]++;
            }
        }
    }

    for (auto x:ans){
        for (auto y:x){
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/*Memo

*/