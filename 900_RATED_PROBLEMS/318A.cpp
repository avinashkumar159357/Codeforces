//File name:Even Odds
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:318A
//Description:math (*900)
//Last Changed:10-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k,a=0; cin>>n>>k;

    if(n%2==0){
        if(k<=(n/2)) cout<<2*k-1;// we get this equation through AP
        else{                   //eg 1 3 5 7 9 2 4 6 8 10
            a=n-(n/2);          //and an=a+(n-1)d,where n=k,a=1,d=2
            k=k-a;              //so now ak=1+(k-1)2 = (2k-1) ,position for odd numbers
            cout<<2*k;
        }
    }else if(n%2==1){
        if(k<=(n/2)+1) cout<<2*k-1;
        else{
            a=n-(n/2);
            k=k-a;
            cout<<2*k; //for even part we just need to get the right k and then 2k will give the position
        }               //and an=a+(n-1)d,where n=k,a=2,d=2
    }                   //and an=a+(n-1)d,where n=k,a=2,d=2
}                       ////so now ak=2+(k-1)2 = (2k) ,position for even numbers

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
        solve();
    }

}
