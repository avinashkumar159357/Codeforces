//File name:Timofey and cubes
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:764B
//Description:constructive algorithm, implementation(*900)
//Last Changed:08-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<ll>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    int i=0,j=n-1;
    while (i<j)
    {
        if(i%2==0) swap(a[i],a[j]);
        i++;
        j--;
    }
    
    for(auto x:a)cout<<x<<" ";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}