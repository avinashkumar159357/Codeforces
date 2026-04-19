#include<bits/stdc++.h>
using namespace std;

int long long n;
void solve() {
    cin >> n;
    int count=0;
    while (n>0)                       //in this problem there are two things  ,one is lucky number and the other is nearly lucky number
    {                                   // def: lucky number is a number which contain only the lucky digit 4 and 7   ,
        int rem=n%10;                     //  , For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not
        n/=10;                           //def:nearly lucky number is a number  if the number of lucky digits in it is a lucky number
        if (rem==4 ||rem==7)               //   For example , 4474, 4474747,40447.
        {                                     
            count+=1;
        }
    }
    if(count==4 || count==7)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
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