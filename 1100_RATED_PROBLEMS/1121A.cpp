//File name:Technogoblet of Fire
//Author:AvinNew Building for SIash kumar
//Email Address:aviofficial159357@gmail.com
//Problem ID:1121A
//Description:implementation,sorting(*1100)
//Last Changed:21-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,m,k; cin>>n>>m>>k;
    vector<int>p(n),s(n),c(k);

    for (int i = 0; i < n; i++)cin>>p[i];
    for (int i = 0; i < n; i++)cin>>s[i];
    for (int i = 0; i < k; i++)cin>>c[i];

    int cnt=0;
    for (int j = 0; j < k; j++)
    {
        int school=s[c[j]-1],max_pow=0;
        for (int i = 0; i < n; i++)
        {
            if(school==s[i])max_pow=max(max_pow,p[i]);
        }
        if(max_pow!=p[c[j]-1])cnt++;
    }
    cout<<cnt;
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}