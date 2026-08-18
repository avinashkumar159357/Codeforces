//File name:New Building for SIS
//Author:Avinash kumar
//Email Address:aviofficial159357@gmail.com
//Problem ID:1020A
//Description:math(*1000)
//Last Changed:18-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,h,a,b,k; cin>>n>>h>>a>>b>>k;
    while (k--)
    {
        ll ta,fa,tb,fb,ans=0,fl=0; cin>>ta>>fa>>tb>>fb;
        if(ta==tb)ans=abs(fa-fb);
        else {
            // this is time taken from tower ta to tb
            ans+=abs(ta-tb);

            // this is time taken from floor fa to nearest floor which has passage
            if(fa>=a && fa<=b){
                ans+=0;
                fl=fa;
            }
            else {
                ans+=min(abs(fa-a),abs(fa-b));
                fl=(abs(fa-a)<abs(fa-b))?a:b;
            }

            //this is time from floor fl to fb in the tb tower
            ans+=abs(fl-fb);
        }
        cout<<ans<<"\n";
    }
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}