#include<iostream>
using namespace std;
void kl(int arr[],int n,int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for (int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for (int i=0;i<n;i++){
        arr[n-k+i]=temp[i];
    }

}
void kr(int arr[],int n,int k){
    k=k%n;
    int temp[k];
    for (int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for (int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for (int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}
void tr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={10,20,30,40,50};
    int n=5;
    int k=2;
    kl(arr,n,k);
    tr(arr,n);
    cout<<"enter the elements for rr ";
    cin>>k;
    cout<<endl;
    kr(arr,n,k);
    tr(arr,n);
}