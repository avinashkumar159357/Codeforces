//File Name:2162A_Beautiful_average.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: CF(800)
//Description:brute force,greedy
//Last Changed:16-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,l,r; cin>>n;
    vector<int>a(n),b;
    for (int  i = 0; i < n; i++) cin>>a[i];

    vector<int>pref(n);
    pref[0]=a[0];
    for (int i = 1; i < n; i++) pref[i]=pref[i-1]+a[i];
    int ans=0;
    for (int  l = 0; l < n; l++)
    {
        for (int r = l; r < n; r++)
        {
            int sum;
            if (l == 0) sum = pref[r];
            else sum = pref[r] - pref[l-1];
            int avg=sum/(r-l+1);
            ans=max(ans,avg);
        }
    }
    cout<<ans<<"\n";   
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 