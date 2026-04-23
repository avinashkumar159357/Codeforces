//File name:Panoramix's prediction
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 80A
//Description:brute force
//Last Changed:23-4-2026

#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void solve() {
    int n,m; cin>>n>>m;
    int i=n+1;
    int next_Prime;
    while (true)
    {
        if(isPrime(i)){
            next_Prime=i;
            break;
        }
        i++;
    }
    if(next_Prime==m) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}