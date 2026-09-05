#include<iostream>
using namespace std;
int slw(int arr[],int n,int k){
    if(k==0 || k>n) return -1;
    int w=0;
    for (int i=0;i<k;i++){
        w +=arr[i];
    }
    int m=w,s;
    for (int i=k;i<n;i++){
        w=w-arr[i-k]+arr[i];
        if(m<w){ m=w; s=i; }

    }
    cout<<"so now the max sb arrayis : ";
    for (int i=s-k+1;i<=s;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return m;
}
int main(){
    int arr[10]={10,20,30,40,50,60,70};
    int n=7;
    int k=3;
    int g=slw(arr,n,k);
    cout<<"the maximum window is : "<<g;
}