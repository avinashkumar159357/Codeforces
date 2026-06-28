//File name:Sonya and Hotels
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1004A
//Description:implementation(*900)
//Last Changed:28-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   
    int n; cin>>n;
    ll d; cin>>d;

    vector<ll>a(n),b;
    
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        b.push_back(a[i]-d);
        b.push_back(a[i]+d);
    }
    int cnt=0;
    for (int  i = 1; i < b.size(); i++)
    {
        if(b[i]<b[i-1])cnt+=2;
        else if(b[i]==b[i-1])cnt++;
    }
    
    cout<<b.size()-cnt;
}
/*void solve(){    // editorial approach//
    int n; cin>>n;
    ll d; cin>>d;

    vector<ll>a(n),b;
    
    for (int i = 0; i < n; i++) cin>>a[i];
        
    int cnt=2; //first and last position are always valid (a[0] - d) and (a[n-1] + d)
    for (int  i = 1; i < n; i++)
    {
        ll gap=a[i]-a[i-1];

        if(gap>(2*d))cnt+=2;
        else if(gap==(2*d))cnt++;
    }
    
    cout<<cnt;
}*/

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}