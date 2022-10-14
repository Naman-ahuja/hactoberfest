#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
  ll n;
  cin>>n;
  vector<string>v;
  map<string,ll>m1,m2,m3;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
    m1[s]++;
  }
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
    m2[s]++;
  }
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
    m3[s]++;
  }
  vector<ll>ans;
  ll tm=0;
  ll i=0;
  while(i<n){
    auto p1=m2.find(v[i]);
    auto p2=m3.find(v[i]);
    if(p1==m2.end() && p2==m3.end()){
      tm+=3;
    }
    else if(p1==m2.end() || p2==m3.end()){
      tm++;
    }
    i++;
  }
  ans.push_back(tm);
  tm=0;
  while(i<2*n){
    auto p1=m1.find(v[i]);
    auto p2=m3.find(v[i]);
    if(p1==m1.end() && p2==m3.end()){
      tm+=3;
    }
    else if(p1==m1.end() || p2==m3.end()){
      tm++;
    }
    i++;
  }
  ans.push_back(tm);
  tm=0;
  while(i<3*n){
    auto p1=m1.find(v[i]);
    auto p2=m2.find(v[i]);
    if(p1==m1.end() && p2==m2.end()){
      tm+=3;
    }
    else if(p1==m1.end() || p2==m2.end()){
      tm++;
    }
    i++;
  }
  ans.push_back(tm);
  tm=0;
  for(ll k:ans){
    cout<<k<<" ";
  }
  cout<<endl;
  return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}