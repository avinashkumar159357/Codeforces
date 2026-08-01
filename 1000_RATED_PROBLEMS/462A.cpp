//File name:Appleman and Easy Task
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:462A
//Description:brute force,implementation(*1000)
//Last Changed:01-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    int n; cin>>n;
    vector<vector<char>>s(n,vector<char>(n));
    bool flag=true;

    // taking input
    for (int i = 0; i < n; i++)
    { for (int j = 0; j < n; j++) cin>>s[i][j]; }
    

    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < n; j++) 
        {
            int cnt=0;
            // up
            if((i-1)>=0){
                if(s[i-1][j]=='o')cnt++;
            }

            // down
            if((i+1)<=n-1){
                if(s[i+1][j]=='o')cnt++;
            }

            // left
            if(((j-1)>=0)){
                if(s[i][j-1]=='o')cnt++;
            }

            // right
            if(((j+1)<=n-1)){
                if(s[i][j+1]=='o')cnt++;
            }

            if(cnt%2!=0){
                flag=false;
                break;
            }
        }
        if(flag==false) break;
    }
    
    if(flag) cout<<"YES";
    else cout<<"NO";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}