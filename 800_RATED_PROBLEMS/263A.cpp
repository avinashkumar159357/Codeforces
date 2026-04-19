#include<bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;
    void solve(){
        int a,b,s=0;
        vector<vector<int>> arr(5, vector<int>(5));
        //taking input in an 2D array 
        for (int i = 0; i < 5; i++)
        {
            for (int  j = 0; j < 5; j++)
            {
                cin>>arr[i][j];
                if (arr[i][j]==1)
                {
                    a=i;
                    b=j;
                }   
            }    
        }
        while(a!=2 || b!=2){   //my approach (a little long )
            if(a>2) {
                a--;
                s+=1;
            }
            if(a<2){
                a++;
                s+=1;
            }    
            if(b>2) {
                b--;    
                s+=1;
                }
            if(b<2){
                b++;
                s+=1;
            }    
        }  
        cout<<s;  //without using the above while we can just use 
                  //cout << abs(x - 2) + abs(y - 2); this will give the same result 
                  //with less time(i came to know this later)
    }

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }
}    



