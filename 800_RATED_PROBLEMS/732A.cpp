#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k,r; cin>>k>>r;
    int i=1;
    bool flag=true;
    while (flag)
    {
        int sum=0;
        sum=k*i;
        i++;
        if (sum%10==0 || (sum-r)%10==0)
        {
            flag= false;
        }     
    }
    cout<<(i-1);
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
            
    int t=1; 
    // cin>>t;
    while(t--) {
        solve();
    }

}    

