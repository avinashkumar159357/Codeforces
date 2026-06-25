//File name:Expression
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 479A
//Description:brute force ,math(*1000)
//Last Changed:25-06-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;  cin>>a>>b>>c;
    cout<<max({a+b*c,a*(b+c),a*b*c,(a+b)*c,a+b+c,(a*b)+c});
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}