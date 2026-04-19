#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    bool flag=false;
    vector<int>a(n);
    for(int i=0;i<n ; i++){
        cin>>a[i];
        if(a[i]==67) flag=true;
    } 
    if (flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}     
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);    
        
    int t; cin>>t;
    while(t--) {
            solve();
        }
    }         

