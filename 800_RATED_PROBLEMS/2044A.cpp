    #include<bits/stdc++.h>
    using namespace std;

    void solve(){   
        int n,c=0;
        cin>>n;
        for (int a = 1; a < n; a++)
        {
            for (int b = 1; b < n; b++)
            {
                if ((a+b)==n)
                {
                    c+=1;
                }
            }
        }
        cout<<c<<"\n";
        
    }
    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin>>t;
        while(t--) {
            solve();
        }

    }    

 