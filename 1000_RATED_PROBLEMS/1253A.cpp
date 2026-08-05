//File name:Single Push
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1253A
//Description:implementation(*1000)
//Last Changed:05-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    int n; cin>>n;
    vector<int>a(n),b(n);

    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];
    
    // finding l
    int l=0,r=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i]){
            l=i;
            break;
        }
    }
    
    // finding r
    for (int i = n-1; i >= 0; i--)
    {
        if(a[i]!=b[i]){
            r=i;
            break;
        }
    }

    int k=b[l]-a[l];

    if(k<0){
        cout<<"NO\n";
        return;
    }

    for (int i = l; i < (r+1); i++)
    {
        if(k!=(b[i]-a[i])){
            cout<<"NO\n";
            return;
        }
    }
    
    cout<<"YES\n";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}