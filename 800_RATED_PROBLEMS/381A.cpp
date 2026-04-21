//Problem name:sereja and dima
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:381A(800)
//Description:greedy,implementation,two pointer(*800)
//Last Changed:21-4-2026
#include<bits/stdc++.h>
using namespace std;    
#define ll long long
#define fastio ios :: sync_with_stdio(0);cin.tie(0);

void solve() {
    int n ; cin>>n;
    int sereja=0,dima=0;
    vector<int>a(n);
    bool turn=true;
    for (int i = 0; i < n; i++) cin>>a[i];
    int i=0,j=n-1;
    while (i<=j)
    {
        if(turn){
            if(a[i]>a[j]){
                sereja+=a[i];
                i++;
            }else
            {
                sereja+=a[j];
                j--;
            }
            turn=false;
        }else
        {
            if(a[i]>a[j]){
                dima+=a[i];
                i++;
            }else
            {
                dima+=a[j];
                j--;
            }
            turn=true;
        }
    } 
    cout<<sereja<<" "<<dima;  
}

int main() {
    fastio;
    int TC=1; //cin>>TC;
    while(TC--) {
        solve();
    }

}    

    