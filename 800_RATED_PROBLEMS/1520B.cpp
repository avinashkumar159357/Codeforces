//File name: Ordinary Numbers
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1520B
//Description:brute force math ,number theory(*800)
//Last Changed:25-05-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n,count=0; cin>>n;
    
    //it gave TLE at brute force approach 
    //this i a much optimised approach
    //where we count all the ordinary number consisting of d=1,then 2 and so on
    //eg for d=1: 1,11, 111,1111,11111,...    [keep counting]
    //and d=2:2,22,222,2222,22222,...         [keep counting]
    //and so on till d=9
    for (ll d = 1; d <= 9; d++)
    {
        ll num=d;
        while (num<=n)
        {
            count++;
            num=num*10 +d;
        }
    }
    cout<<count<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t;  cin>>t;
    while(t--) {
        solve();
    }

}

//brute force approach (TLE)
/*bool ordinary_number(ll num){
    if(num<=9){
        return true;
    }     
 
    ll digit=num%10;
    while (num>0)
    {
        ll dig=num%10;
        if(dig==digit){
            num/=10;
        }
        else return false;
    }
    return true;
}
void solve() {
    ll n; cin>>n;
    ll count=0;
    for (ll  i = 1; i <=n; i++)
    {
        if(ordinary_number(i))count++;
    }
    cout<<count<<"\n";
}*/