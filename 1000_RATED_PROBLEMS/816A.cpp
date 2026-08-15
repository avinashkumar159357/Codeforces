//File name:Karen and Morning
//Author:Avinash kumar
//Email Address:aviofficial159357@gmail.com
//Problem ID:816A
//Description:brute force,implementation(*1000)
//Last Changed:15-08-2026

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool palindrome(int a,int b){
    if(a==0 && b==0)return true;
    else if(a<10 && b<10)return false;
    else if(a<10 && b>=10){
        if(b%10==0 && b/10==a)return true;
        else return false;
    }else if(a>=10 && b<10){
        if(a%10==0 && a/10==b)return true;
        else return false;
    }else {
        if(b%10==a/10 && b/10==a%10)return true;
        else return false;
    }
}
void solve() {
    string s; cin>>s;
    int cnt=0;
    string s1,s2;
    s1+=s[0];
    s1+=s[1];
    s2+=s[3];
    s2+=s[4];
    int a=stoi(s1),b=stoi(s2);

    while (true)
    {       
        if(palindrome(a,b)){
            cout<<cnt;
            break;
        }
        cnt++;
        b++;
        if(b==60){
            b=0;
            a++;
        }
        if(a==24)a=0;
    }
    
}


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int TC=1; //cin>>TC;
    while (TC--) {solve();}
}