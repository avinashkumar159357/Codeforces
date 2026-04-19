#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<cctype>
using namespace std;

void solve(){
    int n,i;
    cin>>n;
    while (n--)
    {
        cin>>i;
        if (i==0)
        {
            if (n==0)
            {
                cout<<"EASY";
            }
            
            continue;
        }else
        {
            cout<<"HARD";
            break;
        }
    }
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


