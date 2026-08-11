//Problem name:Array
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:300A
//Description:brute force , constructive algorithm, implementation(*1100)
//Last Changed:10-08-2026
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<int>a(n),pos,neg,zero;
    int p=0,ne=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>0)p++;
        else if(a[i]<0)ne++;
    }
    if(ne%2==0)ne--;

    int e=0,o=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0)zero.push_back(a[i]);
        else if(p==0 && a[i]<0 && e<2){
            pos.push_back(a[i]);
            e++;
            ne--;
        }
        else if(a[i]>0)pos.push_back(a[i]);
        else if(a[i]<0 && o<ne){
            neg.push_back(a[i]);
            o++;
        }else zero.push_back(a[i]);
    }
    
    cout<<neg.size()<<" ";
    for(auto x:neg)cout<<x<<" ";
    cout<<"\n";
    
    cout<<pos.size()<<" ";
    for(auto x:pos)cout<<x<<" ";
    cout<<"\n";

    cout<<zero.size()<<" ";
    for(auto x:zero)cout<<x<<" ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; //cin >> t;
    while (t--) solve();
}
