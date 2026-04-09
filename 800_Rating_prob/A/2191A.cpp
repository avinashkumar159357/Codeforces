#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    bool flag=true;
    vector<int>a(n);
    map<int,int>mp;

    for (int i = 0; i <n; i++) cin>>a[i];
    
    for (int i = 0; i < a.size(); i++)  mp[a[i]]=i+1;
    
    auto it=mp.begin();
    int prev=it->second;
    it++;
    for (; it!=mp.end(); it++){
        if ((prev%2)==(it->second%2))
        {
            flag=false;
            break;
        }
        prev=it->second;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
            
    int t; 
    cin>>t;
    while(t--) {
        solve();
    }

}    

