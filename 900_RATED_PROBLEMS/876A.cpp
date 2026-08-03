//File name:Trip For Meal
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:876A
//Description:math(*900)
//Last Changed:3-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,a,b,c; cin>>n>>a>>b>>c;

    int mn=(a<b)?((a<c)?a:c):((b<c)?b:c);

    if(n==1){
        cout<<"0";
        return;
    }
    else if(mn==a || mn==b){
        if(mn==a)cout<<(n-1)*a;
        else cout<<(n-1)*b;
        return;
    }else {
        n-=2;
        int mn_ab=(a<b)?a:b;
        int mn_ab_c=(mn_ab<c)?mn_ab:c;
        cout<<(mn_ab_c*n)+mn_ab;
    }
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; // cin>>TC;
    while (TC--) {solve();}
}