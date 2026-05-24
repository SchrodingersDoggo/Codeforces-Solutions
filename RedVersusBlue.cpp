#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
   int n,r,b;
   cin>>n>>r>>b;

   int rem = r%(b+1);
   string s="";
   int interval= r/(b+1);
   for(int i=0;i<b+1;i++){
    for(int j=0;j<interval;j++){
        s.push_back('R');
    }
    if(rem>0){
        s.push_back('R');
        rem--;
    }
    if(b>0){
        s.push_back('B');
    }
   }
   for(int i=0;i<n;i++){
    cout<<s[i];
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
