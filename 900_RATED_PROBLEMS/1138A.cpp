//File name:Sushi for Two
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1138A
//Description:binary search, greedy, implementation (*900)
//Last Changed:4-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<int>a(n),b;
    
    for (int i = 0; i < n; i++) cin>>a[i];

    int temp=a[0],cnt=0;

    for (int i = 0; i < n; i++)
    {
        if(a[i]==temp){
            cnt++;
        }else {
            b.push_back(cnt);
            cnt=1;
            temp=a[i];
        }
    }
    b.push_back(cnt);
    
    int ans=0;
    for (int i = 0; i < b.size()-1; i++)
    {
        int min_val=min(b[i],b[i+1]);
        ans=max(ans,min_val);
    }
    cout<<ans*2;
}



int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1 ;// cin>>TC;
    while (TC--) {solve();}
}