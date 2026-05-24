//Problem name:Keyboard Layouts
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:831B
//Description:implementation ,string (*800)
//Last Changed:24-5-2026
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);

void solve() {
    string s1,s2,s,s_f; cin>>s1>>s2>>s;

    for (int i = 0; i < s.size(); i++)
    {
        int ind=s1.find(tolower(s[i]));
        if(isupper(s[i])) s_f+=toupper(s2[ind]);
        else if(islower(s[i])) s_f+=s2[ind];
        else s_f+=s[i];
    }
    cout<<s_f;
}

int main() {

    fastio;

    int TC=1;
   // cin >> TC;

    while (TC--) {
        solve();
    }
}