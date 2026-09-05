#include<iostream>
using namespace std;
void printsm(int arr[],int n,int t){
    int l=0;
    int r=n-1;
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum==t){
        cout<<"sum found : "<<arr[l]<<"+"<<arr[r]<<" = "<<t;
        return;
    }
    else if(sum<t) l++;
    else r--;
}
cout<<"not found the sum"; return;
}
int main(){
    int arr[10]={10,20,30,40,055};
    int n=5;
    int t=50;
    printsm(arr,n,t);
}