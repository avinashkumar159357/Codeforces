//File name: Ehab Fails to Be Thanos
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1174A
//Description:constructive algorithm ,greedy,sorting(*800)
//Last Changed:11-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
     int n; cin>>n;
     vector<int>a(2*n);
     bool flag=false;
     int sum1=0,sum2=0;
     for (int i = 0; i <2*n; i++){
        cin>>a[i];
        sum1+=a[i];
        if(i<=n-1)sum2+=a[i];
    } 
   //if the sum of one half is alredy unequal ,no need to disturb the sequence
   //just print it and return
     if(sum2!=(sum1-sum2)){
        for(int x: a) cout<<x<<" ";
        return;
    }

   //just sort first 
    sort(a.begin(),a.end());

    //then check if the condition is satisfied or not
    int sum3=0;
    for (int i = 0; i < n; i++)sum3+=a[i];
   
    if(sum3!=(sum1/2)){
          for(int x: a) cout<<x<<" ";
    }else cout<<"-1";
   
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}