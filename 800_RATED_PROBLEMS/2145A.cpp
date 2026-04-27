//Problem name:candies for nephews
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:2145A
//Description:math(*800)
//Last Changed:27-4-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,additional_Candy=0; cin>>n;
    if(n%3==0){
        cout<<"0\n";
    }else
    {
        int x=n%3;
        additional_Candy=3-x;
        cout<<additional_Candy<<"\n";
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
    