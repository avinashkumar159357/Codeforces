//File Name:Maple_and_multiplication.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2139A
//Description:greedy,math
//Last Changed:18-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int a,b; cin>>a>>b;
    if (a==b) cout<<"0\n";
    else if (a%b==0 || b%a==0) cout<<"1\n";
    else cout<<"2\n";
       
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 