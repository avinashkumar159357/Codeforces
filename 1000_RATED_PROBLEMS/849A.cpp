//File name:Odds and Ends
//Author:Avinash kumar
//Email Address:aviofficial159357@gmail.com
//Problem ID:849A
//Description:implementation(*1000)
//Last Changed:16-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    if(a[0]%2==0 || a[n-1]%2==0 || n%2==0){
        cout<<"NO";
    }else cout<<"YES";

}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}   