//File name:Eating Soup
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1163A
//Description:greedy , math(*900)
//Last Changed:18-07-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


// answer that i constructed which got accepted
// void solve(){   
//     int n,m; cin>>n>>m;
//     vector<int>a;

//     if(m==0){
//         cout<<"1";
//         return;
//     }else if(m==n){
//         cout<<"0";
//         return;
//     }else if((2*m)<=n){
//         cout<<m;
//         return;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if(i%2==1 && m!=0){
//             a.push_back(1);
//             m--;
//         }else a.push_back(0);
//     }

//     if(m!=0){
//         for (int i = 0; i < n; i++)
//         {
//             if(a[i]==0){
//                 a[i]=1;
//                 m--;
//             }
//             if(m==0)break;
//         }
//     }

//     int cnt=0;
//     for(auto x:a){
//         if(x==0)cnt++;
//     }

//     cout<<cnt;
// }

void solve(){
    int n,m; cin>>n>>m;
    int ans=0,k=n-m;
    if(m==0) ans=1;
    else if(k==0) ans=0;
    else ans=min(m,k);

    cout<<ans;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}