#include<bits/stdc++.h>
using namespace std;

long long digit_Sum(long long);
void solve(){
    
    long long x,z,count=0; cin>>x;
    for (long long i = x+1; i <=(x+100); i++)
    {
        z=i-digit_Sum(i);
        if (x==z) count++;
    }
    cout<<count<<"\n";
}
long long  digit_Sum(long long num){
    long long sum=0;
    while (num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}    



int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t;  cin>>t;
    while(t--) {
        solve();
    }
}