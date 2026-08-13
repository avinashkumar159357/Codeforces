//File name: Buying a TV Set
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1041B
//Description:math(*1000)
//Last Changed:12-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a,b,x,y; cin>>a>>b>>x>>y;
    ll xy=__gcd(x,y);
    x=x/xy;
    y=y/xy;
    cout<<min(a/x,b/y);
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}