    #include<bits/stdc++.h>
    using namespace std;

    void solve(){   
        int n,h,g,c=0;
        cin>>n;
        vector<int>v1(n),v2(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v1[i]>>v2[i];
        }
        
       for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++){
                if (v1[i] == v2[j])
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
        
        int t=1;
        while(t--) {
            solve();
        }

    }    

 