//Problem name:Equalize Prices
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1183B
//Description:math(*900)
//Last Changed:13-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    long long k; cin>>k;
    vector<long long>a(n);
    bool flag=true;
    for (int i = 0; i < n; i++) cin>>a[i];
    
    long long mini=*min_element(a.begin(),a.end());
    long long maxi=mini+k;
    
    for (int i = 0; i < n; i++)
    {
        if(abs(a[i]-maxi)<=k) continue;
        else {
            flag=false;
            break;
        }
    }
    if(flag) cout<<maxi;
    else cout<<"-1";
    cout<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t;  cin>>t;
    while(t--) {
        solve();
    }

}    
