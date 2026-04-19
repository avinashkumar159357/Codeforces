#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,i=0;
    cin>>n;
    while (n>0)
    {
        if (n>=100)
        {
            i=i+(n/100);
            n=n%100;
        }else if (n>=20  && n<100)
        {
            i=i+(n/20);
            n=n%20;
        }else if (n>=10 && n<20)
        {
            i=i+(n/10);
            n=n%10;
        }else if (n>=5  && n<10)
        {
            i=i+(n/5);
            n=n%5;
        }else
        {
            i+=n;
            n=0;
        }    
    }
    cout<<i;
    
    
    
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


