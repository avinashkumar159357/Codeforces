#include<bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;
    void solve(){
        int n,k,p=0,e=0,c;
        cin>>n>>k;
        vector<int>arr(n);
        //taking input in an 1D array 
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        vector<int> a(arr.begin(),arr.begin()+k); //dividing the participant 
        vector<int> b(arr.begin()+k,arr.end()); //whose score is greater than k

        for(int x :a ){  //checking if there is any non positive integer in a
            if (x==0)    //if so we increment e with 1
            {
                e+=1;
            }
        }
        for(int x :b ) {
            if (x!=0 && x==a[a.size()-1]) // checking if any  score in  b is similar
            {                           //to last score of a such that those participant will also 
                p+=1;                    //advance to the next round
            }
            
        }
        cout<<a.size()-e+p; //the final participant who will advance to the next round
    }

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }
}    

