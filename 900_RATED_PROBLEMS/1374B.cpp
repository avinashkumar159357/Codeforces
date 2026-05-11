//Problem name:Multiply by 2, divide by 6
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1374B
//Description:math(*900)
//Last Changed:11-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin>>n;
    int count=0;
    
    while (n!=1)
    {
        if(n%6==0){ //we give priority to division by six 
            n/=6;
            count++;
        }else if(n%3==0){ //if n%6!=0 then it might be dividible by 3 if n has a factor 3 in it 
            n*=2;         //but no factor 2, so we multiply by 2 to give a factor 2  as division by
            count++;      //6 takes one factor 3 and one factor 2  eg 3,9,27
        }else {
            cout<<"-1\n";//if n does not have factor three in it then it is impossible to divide by 6 .
            return;
        }
    }
    cout<<count<<"\n";
}
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int TC; cin>>TC;
    while (TC--)
    {
        solve();
    }
      
}

