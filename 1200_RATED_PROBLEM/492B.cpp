//File name: Vanya and Lanterns
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:492B
//Description:binary search,implementation, math ,sorting(*1200)
//Last Changed:26-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n; cin>>n;
    double l; cin>>l;
    vector<double>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
   
    sort(a.begin(),a.end());
    double ans=0;
    for (int i = 1; i < n; i++)
    {
        ans=max(ans,(a[i]-a[i-1]));
    }
    ans/=2;
    ans=max(ans,(a[0]-0));
    ans=max(ans,(l-a[n-1]));
    
   cout<<fixed<<setprecision(10)<<(ans);
   
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; // cin>>t;
    while(t--) {
        solve();
    }

}

