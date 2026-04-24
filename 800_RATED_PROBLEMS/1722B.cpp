//File name:colourblindness
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1722B
//Description:implementation(*800)
//Last Changed:23-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<vector<char>>g(2,vector<char>(n));
    bool flag =true;
    //taking the input in the 2 x n grid
    for (int  i = 0; i < 2; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cin>>g[i][j];
        }
        
    }
    
    //checking for unequal colour in both the rows of the grid which vasya can see clearly
    for (int  i = 0; i < 1; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if ((g[i][j]=='G' && g[i+1][j]=='R') || (g[i][j]=='R' && g[i+1][j]=='G'))
            {
                flag=false;
                break;
            }else if ((g[i][j]=='B' && g[i+1][j]=='R') || (g[i][j]=='R' && g[i+1][j]=='B'))
            {
                flag=false;
                break;
            }
        }
        
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
