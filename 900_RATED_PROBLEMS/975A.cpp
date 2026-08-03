//File name:Aramic script
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:975A
//Description:implementation,string(*900)
//Last Changed:3-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<string>a(n),b(n);

    for (int i = 0; i < n; i++)cin>>a[i];

    for (int i = 0; i < n; i++)
    {
        vector<bool>vis(256,false);
        string ans;
        for(char c:a[i]){
            if(!vis[c]){
                ans+=c;
                vis[c]=true;    
            }
        }
        sort(ans.begin(),ans.end());
        b[i]=ans;
    }

    unordered_set<string>s;
    for (int i = 0; i < n; i++)s.insert(b[i]);

    cout<<s.size();
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; // cin>>TC;
    while (TC--) {solve();}
}