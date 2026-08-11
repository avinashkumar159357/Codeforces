//Problem name:Domino
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:353A
//Description:implementation,math(*1200)
//Last Changed:11-08-2026
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<int>a(n),b(n);

    int u_odd=0,l_odd=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]%2==1)u_odd++;
        if(b[i]%2==1)l_odd++;
    }
    
    if((u_odd%2==0) && (l_odd%2==0)){
        cout<<"0";
        return;
    }

    int cnt=0;
    // for upper odd ,swaping one time with lower even 
    if(u_odd%2==1){
        for (int i = 0; i < n; i++)
        {
            if((a[i]%2==1) && (b[i]%2==0)){
                swap(a[i],b[i]);
                u_odd--;
                l_odd++;
                cnt++;
                break;
            }
        }
    }

    // for lower odd , swapping one time with upper even 
    if(l_odd%2==1){
        for (int i = 0; i < n; i++)
        {
            if((a[i]%2==0) && (b[i]%2==1)){
                swap(a[i],b[i]);
                l_odd--;
                u_odd++;
                cnt++;
                break;
            }
        }
    }
    
    if((u_odd%2==0) && (l_odd%2==0)){
        cout<<cnt;
    }else cout<<"-1";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; //cin >> t;
    while (t--) solve();
}