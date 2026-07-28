//File name:Balanced Round
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1850D
//Description:brute force, greedy,implementation,sorting(*900)
//Last Changed:28-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    ll n,k; cin>>n>>k;

    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(),a.end());

    ll ans=0,cnt=0;
    for (int i = 1; i < n; i++)
    {
        if((a[i]-a[i-1])<=k)cnt++;
        else cnt=0;
        ans=max(ans,cnt);
    }
    
    cout<<n-(ans+1)<<"\n";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}