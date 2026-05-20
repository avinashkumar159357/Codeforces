//Problem name:Chat room
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:58A
//Description:greedy string (*1000)
//Last Changed:20-5-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve(){
    string s,t; cin>>s;

    t="hello";
    int j=0;
    for (int i = 0; i < s.size(); i++)
    {
       if(s[i]==t[j])j++;
    }
    if(j==5) cout<<"YES";
    else cout<<"NO";
}
int main() {
    fastio;
    int TC=1; //cin>>TC;
    while(TC--) {
        solve();
    }

}    

    