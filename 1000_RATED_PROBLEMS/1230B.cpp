//File name:Ania and Minimizing
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1230B
//Description:greedy, implementation(*1000)
//Last Changed:08-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int i=0;
    if(n==1 && k==1){
        cout<<"0";
        return;
    }
    while (k!=0 && i<n)
    {
        if(i==0){
            if(s[i]!='1'){
                s[i]='1';
                k--;
            }
        }else{
            if(s[i]!='0'){
                s[i]='0';
                k--;
            }
        }
        i++;
    }
    cout<<s;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}