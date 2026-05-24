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
    char c;
    cin>>n;
    cin>>c;
    string s;
    cin>>s;
    s+=s;
    n+=n;

    ll lg=-1;
    ll time = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='g'){
            lg=i;
        }
        if(s[i]==c){
            time = max(time, lg-i);
        }
    }
    cout<<time<<nl;

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
