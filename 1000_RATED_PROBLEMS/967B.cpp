//File name:Watering System
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:967B
//Description:math,sorting(*1000)
//Last Changed:11-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,A,B; cin>>n>>A>>B;
    vector<int>s(n);
    ll sum=0;
    for (int i = 0; i < n; i++) 
    {
        cin>>s[i];
        sum+=s[i];
    }
    int first=s[0];

    sort(s.begin(),s.end(),greater<int>());

    int j=0,cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==first && j<1){
            j++;
            continue;
        }

        double water=(first*A)/sum;
        if(water>=B)break;
        else {
            sum-=s[i];
            cnt++;
        }
    }
    cout<<cnt;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}