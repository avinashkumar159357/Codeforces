//File name:GCD Sum
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:1498A
//Description:brute force ,math(*800) 
//Last Changed:19-05-2026
#include<bits/stdc++.h>
using namespace std;

long long sum_of_digits(long long n){
    long long sum=0;
    while (n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

void solve() {
    long long n; cin>>n;

    while (true)
    {
        long long gcd_sum=__gcd(n,sum_of_digits(n));
        if(gcd_sum>1)break;
        n++;
    }
    cout<<n<<"\n";
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) {
        solve();
    }

}