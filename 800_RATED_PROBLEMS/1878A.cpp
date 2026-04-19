    #include<bits/stdc++.h>
    #include<vector>
    #include<cmath>
    using namespace std;

    void solve(){   
        int n,k;
        cin>>n>>k;
        bool res=false;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i <n; i++)
        {
            if (arr[i]==k)
            {
                res=true;
                break;
            }
        }
        if (res)
        {
            cout<<"Yes"<<"\n";
        }else
        {
            cout<<"No"<<"\n";
        }

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

