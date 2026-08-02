//File name:Stages
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1011A
//Description:greedy, implementation, sorting(*900)
//Last Changed:2-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// solution from top coders
void solve() {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    
    sort(s.begin(),s.end());

    int sum=s[0]-'a'+1;
    int cnt=1;
    char last=s[0];

    for (int i = 1; i < n && cnt < k; i++)
    {
        if(s[i]>last+1){
            sum+=s[i]-'a'+1;
            last=s[i];
            cnt++;
        }
    }

    if(cnt==k) cout<<sum;
    else cout<<"-1";
    
}

// solution composed by me 
// int val(char c) {
//     return c - 'a' + 1;
// }

// void solve() {
//     int n,k; cin>>n>>k;
//     string s; cin>>s;
//     bool flag=false;
//     sort(s.begin(),s.end());

//     if(k==1){
//         cout<<val(s[0]);
//         return;
//     }

//     int ans=INT_MAX,sum=0;
//     for (int i = 0; i < n; i++)
//     {   
//         sum=val(s[i]);
//         int cnt=1,l=i;
//         for (int j =i+1; j < n; j++)
//         {
//             if(val(s[j])>(val(s[l])+1)){
//                 sum+=val(s[j]);
//                 l=j;
//                 cnt++;
//             }
//             if(cnt==k){
//                 flag=true;
//                 ans=min(ans,sum);
//                 break;
//             }
//         }
//         if(flag) break;
//     }
//     if(flag)cout<<ans;
//     else cout<<"-1";
// }



int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; // cin>>TC;
    while (TC--) {solve();}
}