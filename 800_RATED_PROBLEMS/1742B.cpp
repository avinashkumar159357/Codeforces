#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n;
    vector<long long>a(n);
    set<long long >st;
 
    for( int i=0 ; i<n ; i++)  cin>>a[i];
    
    for (int  i = 0; i < n; i++)//the question wants to know whether there 
    {                           //is unique elements in the array or not (strictly increasing) 
        st.insert(a[i]);        //so we use set which remove all the duplicates element
    }                           //and check whether their size is equal to initial length of the array.
    if (st.size()==n)
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
    
    int t; cin>>t;
    while(t--) {
        solve();
    }
 
}    
//another approach
void solve(){
    int n; cin>>n;
    vector<long long>a(n);
    bool flag;

    for( int i=0 ; i<n ; i++)  cin>>a[i];

    sort(a.begin(),a.end());
    
    for (int  i = 0; i < n; i++)
    {
        if(i!=(n-1)){    //this approach does it by comparing the element (>)
            if (a[i]<a[i+1])//agiain and again
            {
                flag=true;
                continue;
            }else
            {
                flag=false;
                break;
            }
        }
        
    }   

    if (flag)
    {
        cout<<"YES"<<"\n";
    }else
    {
        cout<<"NO"<<"\n";
    }
}