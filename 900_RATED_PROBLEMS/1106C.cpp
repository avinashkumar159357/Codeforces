//File name:Lunar New Year and Number Division
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1106C
//Description:implemenation,math,sorting,greedy(*900)
//Last Changed:07-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<ll>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(),a.end());

    int i=0,j=n-1;
    ll sum=0;
    while (i<=j)
    {
        sum+=((a[i]+a[j])*(a[i]+a[j]));
        i++;
        j--;
    }
    cout<<sum;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}