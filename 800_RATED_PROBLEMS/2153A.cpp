//File name:Circle of Apple Trees
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2153A
//Description:greedy ,sorting(*800)
//Last Changed:9-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ; cin>>n;
    vector<int>b(n);
    for (int i = 0; i < n; i++) cin>>b[i];
    int count=0;
    sort(b.begin(),b.end(),greater<int>());

    if(b[0]>b[n-1]) count++;

    for (int i = 1; i < n; i++)
    {
        if(b[i-1]>b[i]) count++;
    }

    if(count==0) cout<<"1\n";
    else cout<<count<<"\n";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t;   cin>>t;
    while(t--) {
        solve();
    }

}