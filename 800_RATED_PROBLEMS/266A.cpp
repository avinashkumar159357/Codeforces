#include<bits/stdc++.h>
using namespace std;

int n,R=0,B=0,G=0;
void solve(){
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i]=='R'){              /*iterating through each character
            if(s[i+1]=='R')             in the srinng and checking if the next character is   
               R+=1;                    is same as the current character if so then increased its count 
        }                               R+1*/  
        else if (s[i]=='B'){
            if(s[i+1]=='B')
               B+=1;
        }       
        else if(s[i]=='G'){
            if(s[i+1]=='G') 
               G+=1;
        }       
    }
    cout<<(R+G+B);  //printing the total character to be removed so that no adjacent chararcter are same
    
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