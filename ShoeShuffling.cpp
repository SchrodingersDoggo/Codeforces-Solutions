#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ll,ll>hash;
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(auto it:hash){
        if(it.second==1){
            cout<<-1<<nl;
            return;
        }
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[i]=i+1;
    }

    int i=0;
    int j=0;
    for(j=0;j<n-1;j++){
        if(a[j]!=a[j+1]){
            rotate(ans.begin()+i,ans.begin()+j,ans.begin()+j+1);
            i=j+1;
        }
    }
    rotate(ans.begin() + i, ans.begin() + n-1, ans.begin() + n);
    for(auto val: ans){
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
