//File name:Ilya and Bank Account
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 313A
//Description:implemantation , number theory(*900)
//Last Changed:27-06-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve() {
    string s,temp; cin>>s;
    temp=s;
    ll x=stoll(s);
    if(x>=0){
        cout<<s;
        return;
    }

    int a=s.size();
    
    if(a==3 && s[0]=='-' && s[2]=='0'){
        cout<<"0";
        return;
    }

    string s1=s.erase(a-1,1);
    string s2=temp.erase(a-2,1);

    ll y=stoll(s1);
    ll z=stoll(s2);
    
    cout<<(y>z?y:z);
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}