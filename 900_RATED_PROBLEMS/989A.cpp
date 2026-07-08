//File name: A Blend of Springtime
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:989A
//Description: implementation, string(*900)
//Last Changed:08-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    string s; cin>>s;

    if(s.size()<3){
        cout<<"NO";
        return;
    }

    for (int i = 1; i < s.size()-1; i++)
    {
        if((s[i]!='.') && (s[i]!=s[i-1]  &&  s[i-1]!='.') && (s[i]!=s[i+1]  &&  s[i+1]!='.') && (s[i-1]!=s[i+1])){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}