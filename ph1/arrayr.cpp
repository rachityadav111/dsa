#include<iostream>
using namespace std;
void lr(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void rr(int arr[],int n){
    int temp=arr[n-1];
    for (int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
void tr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={10,20,30,40,50};
    int n=5;
    tr(arr,n);
    lr(arr,n);
    tr(arr,n);
    rr(arr,n);
    tr(arr,n);
    rr(arr,n);
    tr(arr,n);
}