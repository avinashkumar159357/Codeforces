#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m; cin>>n>>m;
    long long req=n/m;
    cout<<n-req<<"\n";
}    


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }
}