#include<bits/stdc++.h>
using namespace std;

int n,k;
void solve(){
    cin>>n>>k;
    for (int i = 0; i < k; i++)
    {
        if (n%10!=0)
        {
            n-=1;
        }else
        {
            n/=10;
        }
        
        
    }
    cout<<n;
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int t=1;;
    while(t -- ) {
        solve();
    }

}    