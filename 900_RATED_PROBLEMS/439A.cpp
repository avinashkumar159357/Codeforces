//File name:Devu, the Singer and Churu, the Joker
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:439A
//Description:greedy,implementation(*900)
//Last Changed:12-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    int n,d; cin>>n>>d;
    vector<int>time(n);

    int time_required=0,j=0;
    for (int i = 0; i < n; i++)
    {
        cin>>time[i];
        time_required+=time[i];
        if(i!=(n-1)){
            time_required+=10;
            j++;
        }
    }
    
    if(time_required>d){
        cout<<"-1";
        return;
    }

    cout<<((j*10)/5)+(d-time_required)/5;

}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}

