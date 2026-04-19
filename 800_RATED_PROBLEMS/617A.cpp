#include<bits/stdc++.h>
using namespace std;

int n,x;
void solve(){
    cin>>n;
    x=n/5;                //for minimum no step we divide by higest step the elephant can take 
    n=n%5;                //remainder 
    for (int i = 4; i>0; i--)  //checking if the remainder is divisible by rest of the possible remainder
    {
        if (n==i)
        {
            x+=1;;
        }
        
    }
    cout<<x;
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int t=1;;
    while(t -- ) {
        solve();
    }

}    