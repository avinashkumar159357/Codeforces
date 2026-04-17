//File name: Right_maximum.cpp 
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID: 2204B
//Description:greedy(800)
//Last Changed:17-4-2026
#include<bits/stdc++.h>
using namespace std;

/*void solve(){         //this is brute force approach but it gives TLE for when n is large  ,also WA on some test cases
    int n ,c=0; cin>>n; //Dont try this approach , i am just keeping it here for warning.
    vector<int>a(n);
    bool flag=true;
    for (int  i = 0; i < n; i++) cin>>a[i];

    int i;
    while(flag){              // here we are finding the rightmost maximum and cutting the parts from there
        int max_value=a[0];     //but this results in O(n^2) which is so much time consuming
        int ind=0;
        for ( i = 1; i < n; i++)//then we start checking again in the left out part for the right most
        {                        //maximum
            if (a[i]>=max_value)
            {
                max_value=a[i];
                ind=i;
            }
            
        }
        if(ind==0){
            c++;   //we keep counting how many  cutting operation we have performed
            flag=false;
        } 
        else {
            n=ind;
            c++;
        }
    }
    cout<<c<<"\n";
}*/
void solve(){
    int n ,c=0; cin>>n;
    vector<int>a(n);
    
    for (int  i = 0; i < n; i++) cin>>a[i];
    int max_value=-1;     //value starts from 1<=a[i]<=n  so -1 ensures that it is 
    for (int i =0; i<n; i++) // smaller than all the value
    {
        if(a[i]>=max_value){
            c++;
            max_value=a[i];
        } 
    }
    cout<<c<<"\n";
}
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
        
    int t; cin>>t;
    while(t--) {
        solve();
    }

}    

