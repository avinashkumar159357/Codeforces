//File name:Football
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:43A
//Description:string(*1000)
//Last Changed:22-08-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n; cin>>n;
    vector<string>a(n);
    int cnt=0;
    string s1,s2;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        s1=a[0];
        if(a[i]==s1)cnt++;
        else s2=a[i];
    } 

    if(cnt>(n-cnt)) cout<<s1;
    else cout<<s2;

    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {solve();}

}