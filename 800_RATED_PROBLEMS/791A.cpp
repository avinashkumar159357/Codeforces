#include<bits/stdc++.h>
using namespace std;

int a, b,year=0;
void solve(){
    cin>>a>>b;
    if(a>b){
        cout<<"invalid input";
    }else{
        while (a<=b)
        {
            a*=3;
            b*=2;
            year++;

        }
        cout<<year;       
    }
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int t=1;;
    while(t -- ) {
        solve();
    }

}    