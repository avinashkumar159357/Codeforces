//File name:Div. 64
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:887A
//Description:implementation(*1000)
//Last Changed:13-07-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){ 
    string s; cin>>s;
    bool flag1=false,flag2=false;
    if(s.size()<7){
        cout<<"no";
        return;
    }

    int cnt_of_zero=0,val=0;
    for (int i = s.size()-1; i >=0; i--)
    {
        if(s[i]=='0'){
            cnt_of_zero++;
            if(cnt_of_zero==6){
                flag1=true;
                val=i-1;
                break;
            }
        }
    }

    for (int i = val; i >=0; i--)
    {
        if(s[i]=='1'){
            flag2=true;
            break;
        }
    }
    
    if(flag1 && flag2) cout<<"yes";
    else cout<<"no";
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}

