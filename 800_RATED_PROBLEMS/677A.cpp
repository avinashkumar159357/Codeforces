#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<cctype>
using namespace std;

void solve(){
    int n,h,s=0,i;
    cin>>n>>h;
    while (n--)
    {
        cin>>i;
        if (i<=h)
        {
            s+=1;
        }else
        {
            s+=2;
        }
    }
    cout<<s;
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


