//File name:A Serial Killer
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:776A
//Description:brute force, implementation , string(*900)
//Last Changed:06-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    string first_victim,second_victim;
    cin>>first_victim>>second_victim;

    int n ; cin>>n;

    vector<string>a(n),b(n);
    for (int i = 0; i < n; i++) cin>>a[i]>>b[i];

    cout<<first_victim<<" "<<second_victim<<"\n";

    for (int i = 0; i < n; i++)
    {
        if(a[i]==first_victim) {
            cout<<b[i]<<" "<<second_victim<<"\n";
            first_victim=b[i];
        }else if(a[i]==second_victim){
            cout<<first_victim<<" "<<b[i]<<"\n";
            second_victim=b[i];
        }
    }
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}