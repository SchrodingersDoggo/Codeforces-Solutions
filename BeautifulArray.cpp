#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;

    ll mini = (k*b);
    ll maxim = (k*b)+(k-1)*n;

    if(s<mini || s>maxim){
        cout<<-1<<nl;
        return;
    }
    vector<ll>ans(n,0);
    ans[0]=mini;
    s-=mini;
    for(int i=0;i<n;i++){
        ll add = min(k-1,s);
        ans[i]+=add;
        s-=add;
    }
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<nl;


}






int main(){
    fastio();

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
