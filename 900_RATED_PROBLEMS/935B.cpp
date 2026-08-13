//File name:Fafa and the Gates
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:935B
//Description:implementation(*900)
//Last Changed:12-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    


    int x=0,y=0;
    int cnt=0;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]=='R')x++;
        else if(s[i]=='U')y++;

        if(x==y && s[i]==s[i+1])cnt++;
    }
    cout<<cnt;
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}