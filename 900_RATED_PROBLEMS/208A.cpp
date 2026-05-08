//File name:Dubstep
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:208A
//Description:string(*900)
//Last Changed:8-05-2026
#include<bits/stdc++.h>
using namespace std;


void solve() {
    string s; cin>>s;
    int i=0;
    int n=s.size();
    while (i<n)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')i+=3;
        else
        {
            cout<<s[i];
            i++;
            if(i!=n-1 && i!=n-2 && i!=n-3){
                if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') cout<<" ";
            }
        }
    }
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}