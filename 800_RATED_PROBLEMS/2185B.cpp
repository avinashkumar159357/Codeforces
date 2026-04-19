//File Name:prefix_max.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 2185B
//Description:greedy
//Last Changed:2026
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    
    vector<int>a(n);
    for(int i=0; i<n;i++) cin>>a[i];

    if(a.size()==1) cout<<a[0]<<"\n";
    else
    {
        int x=*max_element(a.begin(),a.end());
        cout<<x*n<<"\n";
    }   
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

