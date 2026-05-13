//Problem name:Grow The Tree
//Author:Avinash kumar (A_K_0_7)
//Email Address: aviofficial159357@gmail.com
//Problem ID:1248B
//Description:greedy ,math,sorting (*900)
//Last Changed:13-05-2026

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    
    sort(a.begin(),a.end());

    int i=0,j=0,k=n-1;
    long long x=0,y=0;
    while (i<n)
    {
        if(i%2==0){
            y+=a[k];
            k--;
        }else{
            x+=a[j];
            j++;
        }
        i++;
    }
    long long ans=(x*x)+(y*y);
    cout<<ans;
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; // cin>>t;
    while(t--) {
        solve();
    }

}    
