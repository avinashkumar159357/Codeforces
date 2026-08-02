//File name:Circle Metro
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1169A
//Description:implementation,math(*900)
//Last Changed:2-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,a,x,b,y; cin>>n>>a>>x>>b>>y;
    int diff_a=0,diff_b=0;
    
    if(x>=a)diff_a=x-a;
    else diff_a=n-a+x;
    
    if(y<=b)diff_b=b-y;
    else diff_b=b+(n-y);

    int min_dis=(diff_a<diff_b)?diff_a:diff_b;

    for (int i = 0; i <= min_dis; i++)
    {
        if(a==b){
            cout<<"YES";
            return;
        }
        
        if(a==n)a=1;
        else a++;
        if(b==1)b=n;
        else b--;
    }
    cout<<"NO";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; // cin>>TC;
    while (TC--) {solve();}
}