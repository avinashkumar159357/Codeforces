//File name: Absolute Cinema
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2229B
//Description:contest
//Last Changed:23-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<long long>a(n),b(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];

    long long mx=0,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=max(a[i],b[i]);
        mx=max(mx,min(a[i],b[i]));
    }
    
    cout<<mx+sum<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; 
    cin>>t;
    while(t--) {
        solve();
    }

}