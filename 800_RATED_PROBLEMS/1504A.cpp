//Problem name:Déjà Vu
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1504A
//Description:constructive algorithm ,string (*800)
//Last Changed:24-5-2026
#include<bits/stdc++.h>
using namespace std;

bool valid_palindrome(string s){
    string s1=s;
    reverse(s.begin(),s.end());
    return s==s1;
}
#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    string s; cin>>s;

    if(!valid_palindrome(s+'a')){
        cout<<"YES\n"<<s<<'a'<<"\n";
    }else if(!valid_palindrome('a'+s)){
        cout<<"YES\n"<<'a'<<s<<"\n";
    }else cout<<"NO\n";
}

int main() {

    fastio;

    int TC;
    cin >> TC;

    while (TC--) {
        solve();
    }
}