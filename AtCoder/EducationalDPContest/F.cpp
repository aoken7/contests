#include<bits/stdc++.h>
#define rep(i, s, n) for (long long i = s; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
#define putl(a) for(auto x:a)cout<<x<<' '; cout<<endl
using namespace std;
using ll = long long;

int main(){
    string s, t; cin >> s >> t;

    vector<vector<ll>> dp(s.size()+1, vector<ll>(t.size()+1,0));
    //vector<string> ans(s.size()+1, "");

    ll cnt = 0;

    rep(i,1,s.size()+1){
        rep(j,1,t.size()+1){

            if(s[i-1] == t[j-1]){
                if(dp[i-1][j] + 1 > dp[i][j-1]){
                    dp[i][j] = dp[i-1][j] + 1;
                    //ans[i] = ans[i-1] + s[i-1];
                }else{
                    dp[i][j] = dp[i][j-1];
                }
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                //ans[i] = max(ans[i], ans[i-1]);

            }
        }
    }


    ll slen = s.size(), tlen = t.size(); 
    ll len=dp[slen][tlen];
    vector<char> ans(len+1);
    ll i=slen;
    ll j=tlen;
    while(len>0){
	    if(s[i]==t[j]){
		    ans[len]=s[i];
		    i--;
		    j--;
		    len--;
	    }else if(dp[i][j]==dp[i-1][j]){
		    i--;
	    }else{
		    j--;
	    }
    }

    putl(ans);
}