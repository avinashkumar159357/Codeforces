//File name:Cheap Travel
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 466A
//Description:implementation(*1200)
//Last Changed:26-06-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,a,b;  cin>>n>>m>>a>>b;
    int direct_single_ticket=n*a;
    int x=n/m;
    int y=n%m;
    int mixed_ticket=(x*b)+(y*a);
    int only_special_ticket=ceil((double)n/m)*b;
    
    cout<<min({direct_single_ticket,mixed_ticket,only_special_ticket});
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}