//File name:Puzzles
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 337A
//Description:greedy(*900)
//Last Changed:27-06-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m; cin>>n>>m;
    vector<int>a(m);

    for (int i = 0; i < m; i++) cin>>a[i];
    
    sort(a.begin(),a.end());

    int i=0,j=n-1,ans=INT_MAX;
    while (j<m)
    {
        int diff=(a[j]-a[i]);
        ans=min(ans,diff);
        i++;
        j++;
    }
    cout<<ans;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}