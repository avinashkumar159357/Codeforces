//Problem name:Sequence game
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1862B
//Description:constructive algorithm(800)
//Last Changed:20-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    vector<int>b(n),a;
    for (int  i = 0; i < n; i++) cin>>b[i];
    
    for (int  i = 0; i < n; i++)
    {
        a.push_back(b[i]);
        if (i!=n-1)
        {
            if (b[i]>b[i+1]) a.push_back(b[i+1]);
        }
    }
    cout<<a.size()<<"\n";
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
    
}

int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 