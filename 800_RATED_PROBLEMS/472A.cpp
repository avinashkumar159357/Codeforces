//Problem name:Design Learn Tutorial from math
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:472A(800)
//Description:math, number theory(*800)
//Last Changed:21-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);
bool isComposite(int n) {
    if (n <= 3) return false; // 1,2,3 are not composite

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}
void solve() {
    int n; cin>>n;
    for (int  i =1; i < n; i++)
    {
        int x=n-i;
        if (isComposite(i) && isComposite(x))
        {
            cout<<i<<" "<<x;
            break;
        }
    }
}

int main() {
    fastio;
    int TC=1; //cin>>TC;
    while(TC--) {
        solve();
    }

}    

    