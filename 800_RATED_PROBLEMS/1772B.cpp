#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[2][2];
    bool beautiful=false;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0;  j< 2; j++)
        {
            cin>>a[i][j];
        }
    }
    int i=0,j=0,c=4;
    while (!beautiful && c--)
    {
        if ((a[i][j]<a[i][j+1]) && (a[i+1][j]<a[i+1][j+1]) && (a[i][j]<a[i+1][j]) && (a[i][j+1]<a[i+1][j+1]))
        {
            beautiful=true;
        }else
        {
            int temp=a[i][j];
            a[i][j]=a[i+1][j];
            a[i+1][j]=a[i+1][j+1];
            a[i+1][j+1]=a[i][j+1];
            a[i][j+1]=temp;
        }
    }
    if (beautiful)
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


