#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
  int w,h;
  cin>>w>>h;

  int n;
  cin>>n;
  vector<int>h1(n);
  for(int i=0;i<n;i++){
    cin>>h1[i];
  }
  int m;
  cin>>m;
  vector<int>h2(m);
  for(int i=0;i<m;i++){
    cin>>h2[i];
  }
  int n2;
  cin>>n2;
  vector<int>v1(n2);
  for(int i=0;i<n2;i++){
    cin>>v1[i];
  }
  int m2;
  cin>>m2;
  vector<int>v2(m2);
  for(int i=0;i<m2;i++){
    cin>>v2[i];
  }

  //vertical triangle
  ll base = max(v1[n2-1]-v1[0],v2[m2-1]-v2[0]);
  ll area =(base)*w;

  ///horizontal triangle 
  ll baseh= max(h1[n-1]-h1[0],h2[m-1]-h2[0]);
  ll areah=(baseh)*h;
  ll ans= (max(areah,area));
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
