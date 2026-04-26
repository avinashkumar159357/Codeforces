//Problem name:A number between two others
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2225A(800)
//Description:greedy,math(*800)
//Last Changed:26-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x,y; cin>>x>>y;
    if(y>2*x)cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
