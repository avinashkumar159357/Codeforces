//File name:3-palindrome
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:805B
//Description:constructive algorithm(*1000)
//Last Changed:07-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    string s;
    int a=1,b=1;
    for (int i = 0; i < n; i++)
    {
        if(b<3){
            s+='b';
            if(b==2)a=1;
            b++;
        }else if(a<3){
            s+='a';
            if(a==2)b=1;
            a++;
        }
    }
    cout<<s;
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}