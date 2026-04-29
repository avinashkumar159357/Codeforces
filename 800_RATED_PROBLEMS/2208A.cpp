//Problem name:Bingo candies
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2208A
//Description:constructive algorithm,math(*800)
//Last Changed:26-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,c1=0; cin>>n;
    vector<vector<int>> a(n, vector<int>(n));
    unordered_map<int,int>mp;
    bool flag=true;
    //taking the input in 2D vector array
    for (int i = 0; i < n; i++)
    {
        for (int  j= 0; j < n; j++)
        {
            cin>>a[i][j];
            mp[a[i][j]]++;
        }
    }
    int max_freq=n*(n-1);// if frequency of any elelment is greater than n*(n-1)
    for (auto &x : mp){  // then the given condition satisfies the given matrix
        if(x.second>max_freq){
            flag=false;
            break;
        }
    }
    
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
