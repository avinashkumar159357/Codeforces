//File name:Help Vasilisa the Wise 2
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:143A
//Description:brute force,math(*1000)
//Last Changed:25-08-2026
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int r1,r2,c1,c2,d1,d2; cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int x1=(r1+d1-c2)/2;
    int x2=(r1+d2-c1)/2;
    int x3=(c1+d2-r1)/2;
    int x4=(c2+d1-r1)/2;
    if(x1!=x2 && x1!=x3 && x1!=x4 && x3!=x4 && x2!=x3 && 
        x2!=x4 && x1<10 && x1>0 && x2<10 && x2>0 && x3<10 && 
        x3>0 && x4<10 && x4>0 && (x1+x2)==r1 && (x3+x4)==r2 && 
        (x1+x3)==c1 && (x2+x4)==c2 && (x1+x4)==d1 && (x2+x3)==d2){
        cout<<x1<<" "<<x2<<"\n";
        cout<<x3<<" "<<x4;
    }else cout<<"-1";

    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1;// cin>>t;
    while(t--) {solve();}

}