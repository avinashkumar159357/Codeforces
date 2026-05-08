//File name:Ehab and another construction problem
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1088A
//Description:brute force constructive algorithm(*800)
//Last Changed:8-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,x; cin>>x;
    bool flag=false;

    for (int i = 1; i <=x; i++)
    {
        for (int j =1 ; j <=i; j++)
        {
            
                if((i%j==0) && ((i*j)>x) && ((i/j)<x)){
                    flag=true;
                    a=i;
                    b=j;
                    break;
                }
            
        }
        if(flag) break;
    }
    if(flag) cout<<a<<" "<<b;
    else cout<<"-1";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1;// cin>>t;
    while(t--) {
        solve();
    }

}