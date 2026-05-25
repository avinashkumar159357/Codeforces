//File name: Less or Equal
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:977C
//Description:Sorting (*1200)
//Last Changed:23-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n,k;cin>>n>>k;
    vector<ll>a(n);
    bool flag=true;

    for (int i = 0; i < n; i++) cin>>a[i];

    sort(a.begin(),a.end());

    if(n==1 && k==0){
        if((a[k]-1)==0){
            cout<<"-1";
            return;
        }else{
            cout<<a[k]-1;
            return;
        } 
    }else if(n!=1 && k==0){
        if((a[k]-1)==0){
            cout<<"-1";
            return;
        }else {
            cout<<a[k]-1;
            return;
        }
    }

    ll temp=a[k-1],count=0;
    
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=temp) count++;
            
        if(count>k){
            flag=false;
            break;
        }  
    }
    if(flag) cout<<temp;
    else cout<<"-1";
    
    
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; 
    //cin>>t;
    while(t--) {
        solve();
    }

}