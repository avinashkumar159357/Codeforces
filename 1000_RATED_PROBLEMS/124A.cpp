//File name:The number of positions
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:124A
//Description:math(*1000)
//Last Changed:20-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   //using map
    int n,a,b; cin>>n>>a>>b;
    cout<<min(n-a,b+1);
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}