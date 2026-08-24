//File name:Yaroslav and Permutations
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:296A
//Description:greedy,math(*1100)
//Last Changed:24-08-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n; cin>>n;
    vector<int>a(n),b;
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    
    int mx=-1;
    for (auto it:mp){
        mx=(it.second>mx)?it.second:mx;
    }
    if((n-mx)>=(mx-1))cout<<"YES";
    else cout<<"NO";

}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {solve();}

}