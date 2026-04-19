#include<bits/stdc++.h>
using namespace std;

void solve(){   
    int n,sum=0; cin>>n;

    vector<int>a(n);

    for(int i=0 ; i < n; i++) {//to have same parity ie.even or odd
        cin>>a[i];              //the sum of both the color either even or odd
        sum+=a[i];              //is always even eg. 16+18 =34 and 11+13=24
                                //so just check if the sum of allthe elements in 
    }                           //even or not.
    
    if (sum%2==0)
    {
        cout<<"YES"<<"\n";
    }else
    {
        cout<<"NO"<<"\n";
    }
    
    
}
        
       
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
            solve();
        }
    }    

