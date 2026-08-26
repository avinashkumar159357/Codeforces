//File name:Comparing Strings
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:186A
//Description:implementation ,string(*1100)
//Last Changed:26-08-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    string s1,s2; cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"NO";
        return;
    }
    int first=0,j=0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(j==0 && s1[i]!=s2[i]){
            first=i;
            j++;
        }else if(j==1 && s1[i]!=s2[i]){
            swap(s1[first],s1[i]);
            break;
        }
    }
    if(s1==s2)cout<<"YES";
    else cout<<"NO";
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {solve();}

}