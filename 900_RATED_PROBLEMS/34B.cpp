//Problem name:Sale
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:34B
//Description:greedy, sorting(*900)
//Last Changed:11-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<int>a(n);
    int sum=0;
    for (int i = 0; i < n; i++)cin>>a[i];

    //sort the array to get free items worth maximum
    sort(a.begin(),a.end());

    //not take only m sets ,maximum worth of tv
    for(int i=0; i<n; i++){
        if(a[i]<0 && m){
            sum+=a[i];
            m--;
        } 
    } 
    cout<<abs(sum);
    
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC=1;// cin>>TC;
    while (TC--)
    {
        solve();
    }
      
}

