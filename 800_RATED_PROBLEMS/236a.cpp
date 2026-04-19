#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<cctype>
using namespace std;
    void solve(){
        string s,b;
        bool seen[26]={false};
        cin>>s;
        
        for (char c : s){
            if(!seen[c-'a']){
                seen[c-'a']=true;
                b+=c;
            }
        }
        if (b.length()%2!=0)
        {
            cout<<"IGNORE HIM!";
        }else
        {
            cout<<"CHAT WITH HER!";
        }
    }

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();

    }
}    



