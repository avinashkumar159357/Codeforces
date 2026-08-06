//File name:Anastasia and pebbles
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:789A
//Description:implementation,math(*1100)
//Last Changed:06-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    int n; cin>>n;
    ll k; cin>>k;
    vector<ll>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];

    ll days=0,j=0;
    for (int i = 0; i < n; i++) j+=(a[i]+k-1)/k;
    cout<<(j+2-1)/2;
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}


