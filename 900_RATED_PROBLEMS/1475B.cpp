//Problem name:New Year's Number
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1475B
//Description:brute force ,dp,math(*900)
//Last Changed:12-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    bool flag=false;

    while (!flag)
    {
        if(n%2020==0 || n%2021==0){
            cout<<"YES\n";
            return;
        }else if(n<2020){
            cout<<"NO\n";
            return;
        }else{
            n-=2021;
        }
    }
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC; cin>>TC;
    while (TC--)
    {
        solve();
    }
      
}

