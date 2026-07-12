//File name:Bear and Raspberry
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:385A
//Description:brute force,greedy,implementation(*1000)
//Last Changed:12-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,c; cin>>n>>c;
    vector<int>x(n);
    
    for (int i = 0; i < n; i++) cin>>x[i];

    int rasberry=0,ans=0;
    for (int i = 0; i < n-1; i++)
    {
        if(x[i]>x[i+1]){
            rasberry=x[i]-x[i+1]-c;
            ans=max(ans,rasberry);
        }
    }
    
    cout<<ans;
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}

