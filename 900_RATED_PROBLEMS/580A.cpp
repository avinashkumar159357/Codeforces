//Problem name:Kefa and First Steps
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:580A
//Description:brute force,dp,implementation(*900)
//Last Changed:7-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<long long >a(n);
    int count=1,ans=0;
    for (int i = 0; i < n; i++) cin>>a[i];
    
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]<=a[i+1]) count++;
        else{
            ans=max(count,ans);
            count=1;
        }
    }
    ans=max(count,ans);
    cout<<ans;
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1;// cin>>TC;
    while (TC--)
    {
        solve();
    }
      
}

