#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n; cin>>n;
    vector<int>a(n);

    for(int i=0; i<n;i++) cin>>a[i];

    int minimum=*min_element(a.begin(),a.end());

    for (int  i = 0; i < n; i++)
    {
        if(a[i]==minimum) {
            a[i]+=1;
            break;
    
        }   
    }
    int prod=1;
    for (int  i = 0; i < n; i++) prod*=a[i];
    cout<<prod<<"\n";
    
}

    
   

signed main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t;  cin>>t;
    while(t--) {
        solve();
    }
}