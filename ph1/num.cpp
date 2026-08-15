#include<iostream>
using namespace std;
int main(){
    int n,r,s;
    cin>>n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    cout<<s;
}