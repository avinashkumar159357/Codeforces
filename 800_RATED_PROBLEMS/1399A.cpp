#include<bits/stdc++.h>
using namespace std;
void solve(){
    int c,n; cin>>n;
    vector<int>a(n);
    bool flag=false;

    for (int  i = 0; i < n; i++)  cin>>a[i];

    sort(a.begin(),a.end());

    for (int i = 1; i < n; i++)
    {
       if(abs(a[i]-a[i-1])>1)//here we are using the reversed of whats given in the question
        {                   //because deleting the mimimun element each time is not possible
            flag=true;      //inside a loop so if abs(a[i]-a[i-1])>1 this is there  for even 
            break;          //once then definitely there will mire than one element at the end..
        }
        
    }
    if (!flag)
    {
        cout<<"YES"<<"\n";
    }else
    {
        cout<<"NO"<<"\n";
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

