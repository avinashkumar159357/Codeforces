//File name:Sum of Round Numbers
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1352A
//Description:math,implementation(*800)
//Last Changed:2-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    int n; cin>>n;
    int j=1;
    vector<int>a;
    while (n>0)
    {
        int dig=n%10;
        if(dig!=0)a.push_back(dig * j);
        j*=10;
        n/=10;
    }
    cout<<a.size()<<"\n";
    for(int x:a)cout<<x<<" ";
    cout<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    ll q;   cin>>q;
    while (q--)
    {
        solve();
    }
    
}