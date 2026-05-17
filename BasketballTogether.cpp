#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
   ll n,d;
   cin>>n>>d;
   vector<ll>a(n);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   ll cnt=1;
   ll ans=0;
   ll low=0;
   ll high=n-1;
   while(low<=high){
    if(a[high]*cnt>d){
        cnt=1;
        ans++;
        high--;
    }else{
        low++;
        cnt++;
    }
   }
   cout<<ans<<nl;
}






int main(){
    fastio();

    // int t=1;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}
