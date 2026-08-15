#include<iostream>
using namespace std;
int count(int n){
    int r=0;
    while(n>0){
        n=n/10;
        r++;
    }
    return r;
}
int rev(int n,int s=0){
    if(n==0){
        return s;
    }
    int r=n%10;
    s=s*10+r;
    return rev(n/10,s);
}
int main(){
    int n;
    cin>>n;
    int r=count(n);
    cout<<"total nmber of digits are:"<<r<<endl;
    cout<<"reversed nmber is: "<<rev(n);
}