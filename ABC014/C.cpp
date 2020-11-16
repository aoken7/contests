#include<bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define put(i) cout<<fixed<<i<<endl
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    rep(i,n){
        ll a, b; cin >> a >> b;
        pq.push(make_pair(a,b));
    }

    vector<ll> color(1e6+2);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>>  q;
    rep(i,1e6+2){
        while(!pq.empty()){
            auto top = pq.top();
            if(top.first <= i){
                //cout <<  "i:" << i <<  " push:(" << top.first << "," << top.second << ")" << endl;
                swap(top.first, top.second);
                q.push(top);
                pq.pop();
            }else{
                break;
            }
        }
        
        while(!q.empty()){
            auto front = q.top();
            if(front.first < i){
                //cout << "i:" << i << " pop:(" << front.first << "," << front.second << ")" << endl;
                q.pop();
            }else{
                break;
            }
        }
        
        color[i] = q.size();
    }
    //for(ll i=1e6-10; i<1e6+15; i++) cout << color[i] << " "; cout << endl;
    put(*max_element(all(color)));
}