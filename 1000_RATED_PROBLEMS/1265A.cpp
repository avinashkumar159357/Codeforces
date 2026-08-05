//File name: Beautiful String
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1265A
//Description:constructive algorithm,greedy(*1000)
//Last Changed:5-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin>>s;
    set<char>st={'a','b','c'};
    int n=s.size();

    // first replacing the ? with other character
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            if(s[i]=='?' && s[i+1]=='?') s[i]='a';
            else if(s[i]=='?' && s[i+1]!='?'){
                for(char c:st){
                    if(c!=s[i+1]){
                        s[i]=c;
                        break;
                    }
                }
            }
                
        }else if(i==(n-1)){
            if(s[i]=='?'){
                for(char c:st){
                    if(c!=s[i-1]){
                        s[i]=c;
                        break;
                    }
                }
            }
        }else{
            if(s[i]=='?'){
                for(char c:st){
                    if(c!=s[i-1] && c!=s[i+1]){
                        s[i]=c;
                        break;
                    }
                }
            }
        }
    }
    bool flag=true;
    // now check whether if there is any consecutive duplicates
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]==s[i+1]){
            flag=false;
            break;
        }
    }
    
    if(flag)cout<<s<<"\n";
    else cout<<"-1\n";
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC; cin>>TC;
    while (TC--) {solve();}
}