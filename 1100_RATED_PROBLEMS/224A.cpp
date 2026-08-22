//File name: Parallelepiped
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:224A
//Description:brute force,geometry,math(*1000)
//Last Changed:22-08-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int A,B,C; cin>>A>>B>>C;
    int a=sqrt((A*C)/B);
    int b=sqrt((A*B)/C);
    int c=sqrt((B*C)/A);

    cout<<4*a+4*b+4*c;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {solve();}

}