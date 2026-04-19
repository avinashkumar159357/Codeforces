#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,d,count=0;
    char c;
    long long x,packsCame=0;
    cin>>n>>x;
    packsCame=x;
    while (n--)
    {
        cin>>c>>d;
        if (c=='+')
        {
            packsCame+=d;
        }else if (c=='-')
        {
            if (packsCame>=d)
            {
                packsCame-=d;
            }else
            {
                count++;
            }
               
        }
    }
    cout<<packsCame<<" "<<count;
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

