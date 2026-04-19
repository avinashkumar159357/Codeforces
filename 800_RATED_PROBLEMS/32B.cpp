    #include<bits/stdc++.h>
    #include<vector>
    #include<cmath>
    using namespace std;

    void solve(){   
        string s;
        cin>>s;
        for( int i=0; i<s.size(); i++)
        {
            if (s[i]=='.')
            {
                cout<<"0";
            }
            else if(s[i]=='-')
            {
                if (s[i+1]=='.')
                {
                    cout<<"1";
                    i+=1;
                }else if(s[i+1]=='-')
                {
                    cout<<"2";
                    i+=1;
                }
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

