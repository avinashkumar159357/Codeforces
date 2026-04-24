//File name:Minimal squarre 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1360A
//Description:greedy math
//Last Changed:24-4-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,ans=0; cin>>a>>b;
    if (a<b)  ans=max(2*a,b);
    else  ans=max(a,2*b);
    cout<<ans*ans<<"\n";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}