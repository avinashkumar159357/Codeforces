//File name:Football
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:96A
//Description:implementation,string(*900)
//Last Changed:20-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   //using map
    string s; cin>>s;
    char curr=s[0];
    int cnt=0;
    bool flag=false;
    for (int  i = 0; i < s.size(); i++)
    {
        if(s[i]==curr){
            cnt++;
            if(cnt>=7){
                flag=true;
                break;
            }
        }else {
            curr=s[i];
            cnt=1;
        }
    }
    
    if(flag) cout<<"YES";
    else cout<<"NO";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}