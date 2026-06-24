//File name:Lucky Division
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 122A
//Description:brute force ,number theory (*1000)
//Last Changed:24-06-2026
#include<bits/stdc++.h>
using namespace std;

bool lucky_number(int n){
    unordered_set<int>st={4,7};
    while (n>0)
    {
        int digit=n%10;
        n/=10;
        if(st.find(digit)!=st.end())continue;
        else return false;
    }
    return true;
}

void solve() {
    int n; cin>>n;
    vector<int>a;
    for (int i = 1; i <=1000; i++)
    {
        if(lucky_number(i))a.push_back(i);
    }

    for (int i = 0; i < a.size(); i++)
    {
        if(n%a[i]==0){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}