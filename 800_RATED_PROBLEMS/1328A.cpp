#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c; cin>>a>>b;
    if(a%b==0) cout<<"0\n";
    else
    {
        c=a%b;
        cout<<b-c<<"\n";
    }
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--) {
        solve();
    }
}