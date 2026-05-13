//Problem name:Delete from the Left
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1005B
//Description:brute force ,implementation ,string (*900)
//Last Changed:13-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s,t; cin>>s>>t;
    int n=s.size();
    int m=t.size();
    if(s[n-1]!=t[m-1]){
        cout<<n+m;
        return;
    }
    int count=0;
    while (s[n-1]==t[m-1] && n!=0 && m!=0)
    {
        count++;
        n--;
        m--;
    }
    cout<<(s.size()+t.size())-2*count;
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; // cin>>t;
    while(t--) {
        solve();
    }

}    
