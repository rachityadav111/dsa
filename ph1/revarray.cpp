#include<iostream>
using namespace std;
void rev(int arr[],int s,int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void lr(int arr[],int n,int k){
    if(n<=1) return;
    k=k%n;
    if(k==0) return;
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    rev(arr,0,n-1);
}
void rr(int arr[],int n,int k){
    if(n<=1) return;
    k=k%n;
    if(k==0) return;
    rev(arr,0,n-k-1);
    rev(arr,n-k,n-1);
    rev(arr,0,n-1);
}
void tr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    tr(arr,n);
    int k;
    cout<<"enter the nmber of elemnets yo wann rotate left";
    cin>>k;
    lr(arr,n,k);
    tr(arr,n);
    
    cout<<"enter the nmber of elemnets yo wann rotate right";
    cin>>k;
    rr(arr,n,k);
    tr(arr,n);

}