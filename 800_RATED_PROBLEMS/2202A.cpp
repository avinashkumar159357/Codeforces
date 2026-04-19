#include<bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){   
    int x,y,a,diff; cin>>x>>y;

    if (y>0)
    {
        a=2*y;
        if(x>a){
            diff=x-a;
            if(diff%3==0) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }else if (x==a) cout<<"YES"<<"\n";   
        else cout<<"NO"<<"\n";
    }else if (y==0) 
    {
        if(x%3==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }else if (y<0)
    {
        a=4*abs(y);
        if (x>a)
        {
            diff=x-a;
            if(diff%3==0) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }else if(x==a) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        
    }
}    
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t;  cin>>t;
    while(t--) {
        solve();
    }

}    

 