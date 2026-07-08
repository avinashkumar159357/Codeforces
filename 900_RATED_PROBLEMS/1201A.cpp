//File name:Important Exam
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1201A
//Description:implementation,string(*900)
//Last Changed:08-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,m; cin>>n>>m;

    vector<string>s(n);
    for (int i = 0; i < n; i++) cin>>s[i];

    vector<int>a(m),freq;
    for (int i = 0; i < m; i++) cin>>a[i];

    for (int j = 0; j < m; j++)
    {
        int max_val=INT_MIN;
        unordered_map<char,int>mp;

        for (int i = 0; i < n; i++) mp[s[i][j]]++;
        
        for (auto it:mp){
            if(it.second>max_val){
                max_val=it.second;
            }
        }
        freq.push_back(max_val);
    }
    
    int ans=0;
    for (int i = 0; i < m; i++) ans+=freq[i]*a[i];

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