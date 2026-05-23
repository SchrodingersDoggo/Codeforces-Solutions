#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll v = a[0]+x;
    ll ch=0;
    for(ll i=0;i<n;i++){
        if(abs(v-a[i])>x){
            ch++;
            v=a[i]+x;
        }
    }
    vector<pair<ll,ll>>segments(n);
    for(int i=0;i<n;i++){
        segments[i]={a[i]-x,a[i]+x};

    }
    ll ans=0;
    ll l=segments[0].first;
    ll r = segments[0].second;

    for(int i=1;i<n;i++){
        l=max(l,segments[i].first);
        r=min(r,segments[i].second);
        if(l>r){
            ans++;
            l=segments[i].first;
            r=segments[i].second;

        }
    }
    cout<<ans<<nl;
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
