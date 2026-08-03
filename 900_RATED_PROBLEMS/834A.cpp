//File name:The Useless Toy
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:834A
//Description:implementation(*900)
//Last Changed:3-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string st; getline(cin,st);
    int d; cin>>d;
    
    char s=st[0],e=st[2];
    int duration_1=0;
    if(d>4)duration_1=d%4;
    else duration_1=d;

    int duration_2=duration_1;
    // clockwise
    char cw=s,ccw=s;
    while (duration_1--)
    {
        if(cw=='^')cw='>';
        else if(cw=='>')cw='v';
        else if(cw=='v')cw='<';
        else cw='^';
    }

    // counter clockwise
    while (duration_2--)
    {
        if(ccw=='^')ccw='<';
        else if(ccw=='>')ccw='^';
        else if(ccw=='v')ccw='>';
        else ccw='v';
    }
    
    if(cw==ccw)cout<<"undefined";
    else if(e==cw)cout<<"cw";
    else cout<<"ccw";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; // cin>>TC;
    while (TC--) {solve();}
}