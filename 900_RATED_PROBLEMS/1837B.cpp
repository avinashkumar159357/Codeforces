//File name:Comparison String
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1837B
//Description:greedy (*900)
//Last Changed:3-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
   int n; cin>>n;
   string s; cin>>s;
   int cnt=1,ans=1;
   for (int i =1; i < s.size(); i++)
   {
        if(s[i]!=s[i-1])cnt=1;
        else cnt++;
        ans=max(ans,cnt);
   }
   cout<<ans+1<<"\n";
}



int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC ; cin>>TC;
    while (TC--) {solve();}
}