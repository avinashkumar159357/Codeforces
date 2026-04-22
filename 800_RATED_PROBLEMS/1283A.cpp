//File name:minutes before the new year
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 1283A
//Description:math
//Last Changed:22-4-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int h,m; cin>>h>>m;
    int hour_Left=23-h;
    int hour_min_left=hour_Left*60;
    int min_left=60-m;
    int total_min=hour_min_left+min_left;
    cout<<total_min<<"\n";  

}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}