//File name:Neverending competitions
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:765A
//Description:implementation ,math(*900)
//Last Changed:06-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    string home_airport; cin>>home_airport;

    vector<string>a(n);

    for (int i = 0; i < n; i++) cin>>a[i];

    // if the number of flights is even that is he went to the contest and came back home
    if(n%2==0) cout<<"home";
    // if odd which means he went to the contest and didn't came back home 
    else cout<<"contest";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}