//File name:Palindrome Dance
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1040A
//Description:greedy(*1000)
//Last Changed:2-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,a,b; cin>>n>>a>>b;
    bool flag=true;

    vector<int>c(n);
    for (int i = 0; i < n; i++) cin>>c[i];

    int min_cost=(a<b)?a:b;

    int i=0,j=n-1;
    int sum=0;
    while (i<=j)
    {
        if(i==j && c[i]==2) sum+=min(a,b);
        else if(c[i]!=c[j]){
            if(c[i]==2 || c[j]==2){
                if(c[i]==2){
                    if(c[j]==0)sum+=a;
                    else sum+=b;
                }else {
                    if(c[i]==0)sum+=a;
                    else sum+=b;
                }
            }else {
                flag=false;
                break;
            }
        }else if(c[i]==2 && c[j]==2){
            if(a==min_cost) sum+=(2*a);
            else sum+=(2*b);
        }
        i++;
        j--;
    }
    
    if(flag)cout<<sum;
    else cout<<"-1";
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; // cin>>TC;
    while (TC--) {solve();}
}