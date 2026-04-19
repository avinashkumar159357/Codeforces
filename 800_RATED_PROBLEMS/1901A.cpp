    #include<bits/stdc++.h>
    using namespace std;

    void solve(){   
        int n,x;
      
        int max_dis=0;
        cin>>n>>x;
        vector<int>v(n);
        for (int i = 0; i <    #include<bits/stdc++.h>
    using namespace std;

    void solve(){   
        int n,x;
        int max_dis=0;
        cin>>n>>x;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {                          //code is a bit messy 
            cin>>v[i];              //taking input in the array (using to store the gas station coordinates)
        }                           //in this problem 1 unit distance =1 ltr of fuel 
        max_dis=v[0];               //so minimum volume of gas tank required =maximum distance between two gas station
        for (int i = 0; i < n-1; i++)
        {
            max_dis=max(max_dis,v[i+1]-v[i]);  
        }
        
        max_dis=max((2*(x-v[n-1])),max_dis);
        cout<<max_dis<<"\n";
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

    //without using any array( from the editorial section)
#include <bits/stdc++.h>// i find it much cleaner than my code
                        //good answer
using namespace std;
 
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int prev = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
      int a; cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }
    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
  }
}

 n; i++)
        {
            cin>>v[i];
        }
        max_dis=v[0];
        for (int i = 0; i < n; i++)
        {
            if (i!=(n-1))
            {
                if ((v[i+1]-v[i])>max_dis)
                {
                    max_dis=v[i+1]-v[i];
                }
                
            }
            
        }
        if ((2*(x-v[n-1]))>max_dis)
        {
           cout<<2*(x-v[n-1])<<"\n";
        }else
        {
            cout<<max_dis<<"\n";
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

