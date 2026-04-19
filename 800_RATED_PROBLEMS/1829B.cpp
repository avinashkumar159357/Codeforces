#include<bits/stdc++.h>
using namespace std;

void solve(){   
    int n,c=0; cin>>n;
    vector<int>a(n),b(n);
    int temp;

    for (int  i = 0; i <n; i++) cin>>a[i];
    
    for (int  i = 0; i < n; i++)
    {
        
            if (a[i]==0)
            {
                c+=1;
                if (i==(n-1))
                {
                    b.push_back(c);
                    c=0;
                    break;
                }
                if (a[i+1]==1)
                {
                    b.push_back(c);
                    c=0;
                    continue;
                }
            
            }
        
    }
    temp=*max_element(b.begin(),b.end());
    cout<<temp<<"\n";   
    
}
        
       
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
            solve();
        }
    }    

