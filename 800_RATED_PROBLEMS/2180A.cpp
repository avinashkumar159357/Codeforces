#include<bits/stdc++.h>
using namespace std;

void solve(){
   int l, a, b; cin>>l>>a>>b;
   vector<int>v;
   bool flag=true;
   int pos=a,c=1,i=1;
   while(flag)
   {
        v.push_back(pos);
        pos=(a+i*b)%l;
        i++;
        if(pos==a) flag=false;
   }
   int max_pos=*max_element(v.begin(),v.end());
   cout<<max_pos<<"\n";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }
}