    #include<bits/stdc++.h>
    using namespace std;

    void solve(){
        int n,p,l,x,q;
        cin>>n;

        set<int>s;
        cin>>p;
        for (int i = 0; i < p; i++)
        {  
            cin>>x; 
            s.insert(x);
        }
        cin>>q;
         for (int i = 0; i < q; i++)
        {  
            cin>>x;
            s.insert(x);
        }
       
        if (s.size()==n)
        {
            cout<<"I become the guy.";
        }else
        {
            cout<<"Oh, my keyboard!";
        }

    }
        


    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t=1;//cin>>t;
        while(t--) {
            solve();
        }

    }    

