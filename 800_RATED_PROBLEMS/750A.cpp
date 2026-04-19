#include<bits/stdc++.h>
using namespace std;

void solve(){   
    int n,k,t=0,c=0; cin>>n>>k;
    int Time_Taken=0;

    for (int i = 1; i <= n; i++)
    {
        t+=5*i;
        Time_Taken=t+k;
        if (Time_Taken <= 240)
        {
            c+=1;
            continue;
        }
    }
   cout<<c;
    
}
        
       
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t=1; //cin>>t;
    while(t--) {
            solve();
        }
    }    

