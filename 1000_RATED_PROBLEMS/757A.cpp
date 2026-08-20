//File name:Gotta Catch Em' All!
//Author:AvinNew Building for SIash kumar
//Email Address:aviofficial159357@gmail.com
//Problem ID:757A
//Description:implementation(*1000)
//Last Changed:20-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s; cin>>s;
    unordered_map<char,int>mp;
    if(s.size()<9){
        cout<<"0";
        return;
    }

    for (int  i = 0; i < s.size(); i++)mp[s[i]]++;
    cout<<min({mp['B'],mp['u']/2,mp['l'],mp['b'],mp['a']/2,mp['s'],mp['r']});

}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}