#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){   
    int n,s,x,sum=0; cin>>n>>s>>x;
    vector<int>a(n);
    int diff=0;
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if (sum>s)
    {
        cout<<"NO"<<"\n";
    }else if (sum==s)
    {
        cout<<"YES"<<"\n";
    }else if(sum<s)
    {
         diff=s-sum;
        if(diff%x==0){
            cout<<"YES"<<"\n";
        }else
        {
            cout<<"NO"<<"\n";
        }
    }
}
signed main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t;  cin>>t;
    while(t--) {
        solve();
    }

}    

 