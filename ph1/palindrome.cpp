#include<iostream>
using namespace std;
int main(){
    int n,p=0,r,s=0;
    cin>>n;
    p=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(p==s){
        cout<<"given nmber is palindrome";
    }
    else {cout<<"not A palindorme number";}
}