//File name: IQ test
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:25A
//Description:brute force(*1300)
//Last Changed:12-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n; cin>>n;
    vector<int>a(n);

    int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)even++;
        else odd++;
    }
    
    int ans=0;
    if(even==1){
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                ans=i+1;
                break;
            }
        }
    }else {
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==1){
                ans=i+1;
                break;
            }
        }
    }

    cout<<ans;
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}

