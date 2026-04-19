//File name: 1-1.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 2207A
//Description:greedy, string(800)
//Last Changed:17-4-2026
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,maxx=0,minn=0; cin>>n;
    string s; cin>>s;

    for (int  i = 1; i < n-1; i++)
    {
        if (s[i-1]=='1' && s[i+1]=='1' && s[i]=='0') s[i]='1';
    }

    for (int  i = 0; i <n; i++) if(s[i]=='1') maxx++;
   
    for (int  i = 1; i < n-1; i++)
    {
        if (s[i-1]=='1' && s[i+1]=='1' && s[i]=='1') s[i]='0';
    }
    for (int  i = 0; i <n; i++) if(s[i]=='1') minn++;

    cout<<minn<<" "<<maxx<<"\n";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

