#include<bits/stdc++.h>
using namespace std;

void solve(){
    int M=0,B=0,n; cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++){
        cin>>a[i];      //this problem is little tricky if mihai wants to have more
        if (a[i]%2==0)  //candies at all points of time except at the start and he take 
        {               //omly even no of candies so we can arrange in such a way that we 
            M+=a[i];    //put all the even number candies  at the start of the 
        }else           //array and directly check if even number candies is strictly greater than 
        {               //odd number candies..
            B+=a[i];
        }
    }
    if (M>B)
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


