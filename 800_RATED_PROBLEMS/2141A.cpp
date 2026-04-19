//File Name:Furniture.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:2141A
//Description:greedy,math
//Last Changed:19-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n,c=0; cin>>n;
    vector<int>a(n),b;
    for (int i = 0; i < n; i++) cin>>a[i];

    int BUDGET=a[0];
    for (int i =1 ; i <n; i++)
    {
        if(a[i]>BUDGET){
            c++;
            b.push_back(i+1);
        }
        if(a[i]<=BUDGET) BUDGET=a[i];
    }
    cout<<c<<"\n";
    for(int x: b) cout<<x<<" ";
    cout<<"\n";
    
}
int main() {
    fastio;
    int TC; cin>>TC;
    while(TC--) {
        solve();
    }

}    

 