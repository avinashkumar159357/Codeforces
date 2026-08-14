//File name:Salem and Sticks
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1105A
//Description:brute force , implementation(*1100)
//Last Changed:14-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];

    int t=*max_element(a.begin(),a.end());
    int ans=INT_MAX,val=0;
    
    while (t>0)
    {
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==t) continue;
            sum+=(abs(t-a[i])-1);
        }
        if(sum<=    ans){
            ans=sum;
            val=t;
        }
        t--;
    }
    cout<<val<<" "<<ans;
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}