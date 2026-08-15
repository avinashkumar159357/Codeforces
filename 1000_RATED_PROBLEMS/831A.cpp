//File name:Unimodal Array
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:831A
//Description:implementation(*1000)
//Last Changed:15-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)cin>>a[i];

    bool flag=true,ok_1=true,ok_2=true;

    for (int i = 1; i < n; i++)
    {
        if(a[i]>a[i-1]){
            if(ok_1==true)continue;
            else{
                flag=false;
                break;
            } 
        }else if(a[i]==a[i-1]){
            ok_1=false;
            if(ok_2==true)continue;
            else {
                flag=false;
                break;
            }
        }else if(a[i]<a[i-1]){
            ok_2=false;
            ok_1=false;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}