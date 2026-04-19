    #include<bits/stdc++.h>
    #include<vector>
    #include<cmath>
    using namespace std;

    void solve(){   
        int n,p,q,s=0;
		cin>>n;
		while ((n!=0 &&(cin>>p>>q)))
		{
			if (p!=q && abs(p-q)>=2)
			{
				s+=1;
			}
			n--;
		}
		cout<<s;
}
    int main() {
        ios :: sync_with_stdio(0);
        cin.tie(0);
        
        int t=1;
        while(t--) {
            solve();
        }

    }    

