    #include<bits/stdc++.h>
    using namespace std;

    void solve(){   
        string s,se;
        cin>>s;
        vector<int> v;
        for( int i=0; i<s.size(); i++)
        {
            if (s[i]=='+')
            {
                continue;
            }
            int z=s[i]-'0';
            v.push_back(z);
        }
        sort(v.begin(),v.end());
        for (int i=0; i<v.size(); i++){
            se+=to_string(v[i]);
            if (i!=v.size()-1)
            {
                se+='+';
            }
        }
        cout<<se;
    }
    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t=1;
        while(t--) {
            solve();
        }

    }    

////another approach from the tutorial section
void solve(){
    string s,ns;
    int c1=0,c2=0,c3=0;
    cin>>s;
    for (int  i = 0; i < s.size(); i++)
    {
        if (s[i]=='+')
        {
            continue;
        }else if (s[i]=='1')
        {
            c1+=1;
        }else if (s[i]=='2')
        {
            c2+=1;
        }else{
            c3+=1;
        }   
    }
    z=c1+c2+c3;
    for (int i = 0; i < z; i++)
    {
        if (c1)
        {
            ns+=to_string(1);
            c1--;
        }else if (c2)
        {
            ns+=to_string(2);
            c2--;
        }else
        {
            ns+=to_string(3);
            c3--;
        }
        if (i!=(z-1))
        {
            ns+='+';
        }
    }
    
    cout<<ns;
}