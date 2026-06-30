//File name:Dragons
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:230A
//Description:greedy ,sorting(*1000)
//Last Changed:30-06-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   
   int s,n; cin>>s>>n;
   vector<int>x(n),y(n);
   multimap<int,int>mp;
   bool flag=true;

   for (int i = 0; i < n; i++){
      cin>>x[i]>>y[i];
      mp.emplace( x[i], y[i] );
   } 
   
   for (auto it : mp) {
      if(s>it.first) s+=it.second;
      else {
         flag = false;
         break;
      }
   }
  
   if(flag) cout<<"YES";
   else cout<<"NO";

}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}