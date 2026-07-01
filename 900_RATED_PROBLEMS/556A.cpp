//File name:Case of the Zeros and Ones
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:556A
//Description:greedy (*900)
//Last Changed:1-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){  
   int n; cin>>n;
   string s; cin>>s;
   int ones=0, twos=0;
   for (int i = 0; i < n; i++)
   {
      if(s[i]=='1')ones++;
      else twos++;
   }
   cout<<n-(2*min(ones,twos));
   
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}