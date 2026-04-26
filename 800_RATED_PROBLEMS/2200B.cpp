//File name:Deletion sort
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 2200B
//Description:bitmask,brute force,greedy,sorting(*800)
//Last Changed:26-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for (int  i = 0; i < n; i++) cin>>a[i];
    bool flag=true;

    //if the array is already non decresing ,flag stays true else the minimum possible element that  
    for (int i = 0; i < n-1; i++)//stays after removing the elements so that array is still 
    {                              //decresing is always 1.
        if(a[i]<=a[i+1]) continue;
        else flag =false;
    }
    if(flag) cout<<n<<"\n";
    else cout<<1<<"\n";
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
