//File name:ACM ICPC
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:886A
//Description:brute force (*1000)
//Last Changed:8-05-2026
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int sum=0,n=6;
    bool flag=false;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum+=a[i];
    } 
    //an important edge case that i was forgetting so many times 
    //if the total sum is odd ,it cant be divided among two teams equally
    if(sum%2!=0){
        cout<<"NO";
        return;
    }
    
    for (int  i = 0; i < n; i++)
    {
        for (int j =i+1; j < n; j++)
        {
            for(int k=j+1; k<n; k++){
                int value=a[i]+a[j]+a[k];
                if(value==(sum/2)) {
                    flag=true;
                    break; 
                }
            }    
        }
    }
   if(flag) cout<<"YES";
   else cout<<"NO";

}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}