//Problem name:Cifera
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:114A
//Description:math(*1000)
//Last Changed:10-08-2026
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll k,l; cin>>k>>l;
    ll mul=1;
    ll i=0;
    while (true)
    {
        mul*=k;
        i++;
        if(mul==l){
            cout<<"YES\n"<<i-1;
            break;
        }else if(mul>l){
            cout<<"NO";
            break;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; //cin >> t;
    while (t--) solve();
}