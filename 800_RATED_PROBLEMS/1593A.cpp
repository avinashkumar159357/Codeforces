//File name:Elections
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1593A
//Description:math(*800) 
//Last Changed:18-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long maxi=max({a,b,c});

    if(a==maxi){
        if((a==b) || (a==c)) cout<<"1 ";
        else cout<<"0 ";
    }else cout<<maxi-a+1<<" ";

    if(b==maxi){
        if((b==a) || (b==c)) cout<<"1 ";
        else cout<<"0 ";
    }else cout<<maxi-b+1<<" ";

    if(c==maxi){
        if((c==b) || (c==a)) cout<<"1 ";
        else cout<<"0 ";
    }else cout<<maxi-c+1<<" ";
    cout << "\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}