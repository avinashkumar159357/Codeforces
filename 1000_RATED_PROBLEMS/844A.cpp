//File name:Diversity
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:844A
//Description:greedy,implementation,string(*1000)
//Last Changed:4-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin>>s;
    int k; cin>>k;

    if(s.size()<k){
        cout<<"impossible";
        return;
    }
    vector<bool>vis(256,false);
    int cnt=0;
    for(char c:s){
        if(!vis[c]){
            cnt++;
            vis[c]=true;
        }
    }
    if((k-cnt)<0)cout<<"0";
    else cout<<k-cnt;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; // cin>>TC;
    while (TC--) {solve();}
}