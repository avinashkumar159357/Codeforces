//File name: Laptops
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:456A
//Description:sorting(*1100)
//Last Changed:11-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    vector<int>a(n),b(n);
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cin>>b[i];
        mp[a[i]]=b[i];
    }

    int j=0;
    for(auto it: mp){
        a[j]=it.first;
        b[j]=it.second;
        j++;
    }
    
    
    for (int i = 1; i < n; i++)
    {
        if((a[i]>a[i-1]) && (b[i]<b[i-1])){
            cout<<"Happy Alex";
            return;
        }
    }
    
    cout<<"Poor Alex";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}

