//File name:Integer Points
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1248A
//Description:geometry ,math(*1000)
//Last Changed:7-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<ll>p(n);
    ll num_of_odd_in_p=0, num_of_even_in_p=0;;
    for (int i = 0; i < n; i++){
        cin>>p[i];
        if(p[i]%2==0) num_of_even_in_p++;
        else num_of_odd_in_p++;
    } 

    int m; cin>>m;
    vector<ll>q(m);
    ll num_of_odd_in_q=0, num_of_even_in_q=0;;
    for (int i = 0; i < m; i++){
        cin>>q[i];
        if(q[i]%2==0) num_of_even_in_q++;
        else num_of_odd_in_q++;
    } 

    ll ans=(num_of_even_in_p * num_of_even_in_q) + (num_of_odd_in_p * num_of_odd_in_q);
    cout<<ans<<"\n";
}



int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC;  cin>>TC;
    while (TC--) {solve();}
}