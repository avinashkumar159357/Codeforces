//Problem name:Giga Tower
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:488A
//Description:brute force(*1100)
//Last Changed:11-08-2026

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll b){
    b=abs(b);
    while (b>0)
    {
        if(b%10==8)return true;
        b/=10;
    }
    return false;
}
void solve() {
    ll a; cin>>a;
    ll cnt=0;
    while (true)
    {
        a++;
        cnt++;
        if(check(a)){
            cout<<cnt;
            return;
        }
    }
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; //cin >> t;
    while (t--) solve();
}