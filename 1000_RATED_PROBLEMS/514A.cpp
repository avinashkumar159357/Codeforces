//File name:Chewbaсca and Number
//Author:Avinash kumar
//Email Address: aviofficial159357@gmail.com
//Problem ID:514A
//Description:greedy,implementation (*1200) 
//Last Changed:18-05-2026
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin>>n;
    long long  temp=n,val=0;
    string s= to_string(n);//using string this problem is easy

    
    int x=0,y=0;
    for (int i = 0; i < s.size(); i++)
    {
        x=s[i]-'0';//get the char_int to int 
        y=9-x; //convert it to integer based on problem

        if(i==0 && y==0) continue; //an important case ,first digit cannot be zero

        s[i]=char(y+'0');//put back the new int 
        val=stoll(s);  //turn the string to number(ll)
        if(val<temp) { //check if the new number is less than the previous original number
            temp=val;
            continue;
        }
        else{
            s[i]=char(x+'0');//if not ,we put back the original digit
        }
    }
    cout<<temp;
}

/// another answer (less headache)
/*void solve() {
    long long n; cin>>n;
   
    string s= to_string(n);//using string this problem is easy
    
    int x=0,y=0;
    for (int i = 0; i < s.size(); i++)
    {
        x=s[i]-'0';//get the char_int to int 
        y=9-x; //convert it to integer based on problem
        
        if(i==0 && y==0) continue; //an important case which i was forgetting 
                                //leading digits cannot become zero

        if(y<x) s[i]=char(y+'0');//if the new digit is smaller than the old digit
        //then we add change the new digit with the old digit
    }
    //what wrong i was doing till now ,i was changing the string back
    //to number to make comparison ,but that was not required at all .
    //since if new_digit <old_digit, then the new number is going 
    //is going to be smaller than old number
    cout<<s;
}*/
int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t=1; 
    //cin>>t;
    while(t--) {
        solve();
    }

}