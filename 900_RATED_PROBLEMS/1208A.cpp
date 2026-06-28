//File name:XORinacci
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1208A
//Description:math(*900)
//Last Changed:28-06-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Recursive approach which gives o(2^n) and gives TLE for n<=10^9
// ll XORinacci(ll a,ll b,ll n){
//     if(n==0) return a;
//     if(n==1) return b;
//     return XORinacci(a,b,n-1) ^ XORinacci(a,b,n-2);
// }

void solve(){   
   ll a,b,n; cin>>a>>b>>n;
//    f(0)=a
//    f(1)=b 
//    f(2)=a ^ b
//    f(3)=f(2) ^ f(1) = (a ^ b) ^b  = a
//    f(4)=f(3) ^ f(2) = a ^ (a ^ b)=b
//    f(5)=f(4) ^ f(3) = a ^ b
//    f(6)=f(5) ^ f(4) = f(3) = a
//    f(7)=f(6) ^ f(5) = f(4) = b
//    f(8)=f(7) ^ f(6) = f(5) = a ^ b
//    so this pattern keeps repeating after every 3 and 
//    after every 3 we get a, 
//    after every 3 + 1 we get b,
//    and after every 3 + 2 ,we get a ^ b
//    therefore ,   

   if(n%3==0) cout<<a;
   else if(n%3==1) cout<<b;
   else cout<<(a^b);

   cout<<"\n";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC; cin>>TC;
    while (TC--) {solve();}
}