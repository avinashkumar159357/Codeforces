//Problem name:square
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1921A
//Description:greedy , math (*800)
//Last Changed:28-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int diff=0;
    if(x1==x2) diff=abs(y1-y2);
    else if(x1==x3) diff=abs(y1-y3);
    else if(x1==x4) diff=abs(y1-y4);
    
    cout<<diff*diff<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}
