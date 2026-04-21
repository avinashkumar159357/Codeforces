//Problem name:Maximum GCD
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1370A
//Description:greedy,implementation,math,number theory(*800)
//Last Changed:20-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n; cin>>n;
    int ans=0;
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n ; j++)
        {
            if(i!=j && (i%j==0 || j%i==0)){
                int gcd=min(i,j);
                ans=max(ans,gcd);
            }
        } 
    }
    cout<<ans<<"\n";
}

int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

    