//File name:Protect Sheep
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:948A
//Description:brute force,dfs and similar, graphs ,implementation(*900)
//Last Changed:01-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    int r,c; cin>>r>>c;
    vector<vector<char>>s(r,vector<char>(c));
    bool flag=true;

    // taking input
    for (int i = 0; i < r; i++)
    { for (int j = 0; j < c; j++) cin>>s[i][j]; }
    

    for (int i = 0; i < r; i++)
    { 
        for (int j = 0; j < c; j++) 
        {
            if(s[i][j]=='S'){
                // up
                if((i-1)>=0){
                    if(s[i-1][j]=='W')flag=false;
                    if(s[i-1][j]=='.')s[i-1][j]='D';
                }

                // down
                if((i+1)<=r-1){
                    if(s[i+1][j]=='W')flag=false;
                    if(s[i+1][j]=='.')s[i+1][j]='D';
                }

                // left
                if(((j-1)>=0)){
                    if(s[i][j-1]=='W')flag=false;
                    if(s[i][j-1]=='.')s[i][j-1]='D';
                }

                // right
                if(((j+1)<=c-1)){
                    if(s[i][j+1]=='W')flag=false;
                    if(s[i][j+1]=='.')s[i][j+1]='D';
                }
                if(flag==false) break;
            }
        }
        if(flag==false) break;
    }
    
    if(flag){
        cout<<"YES\n";
        for (int i = 0; i < r; i++)
        { 
            for (int j = 0; j < c; j++) {
            cout<<s[i][j];
            }
            cout<<"\n";
        }
    }
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