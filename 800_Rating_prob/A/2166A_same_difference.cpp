//File Name:2166A_same_difference.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: CF(800)
//Description:string ,brute force,greedy
//Last Changed:16-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    unordered_map<char,int> mp;

    for (int  i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int x=mp[s[n-1]];
    cout<<n-x<<"\n";


}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 