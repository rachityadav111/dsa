#include<iostream>
#include<vector>
using namespace std;
int minii(int arr[],int n){
    int mini=arr[0];
    for (int i=0;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
        }
    }
    return mini;
}
int sum(int arr[],int n){
    int s=0;
    for (int i=0;i<n;i++){
        s=s+arr[i];
    }
    return s;
}
int main(){
    int n=0,s=0;
    cout<<"enter the nmber of elements";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<i+1<<". "<<arr[i]<<endl;
    }
    int m=minii(arr,n);
    cout<<"minimun element in the array = "<<m<<endl;
    s=sum(arr,n);
    cout<<"sum of the whole array is = "<<s<<endl;
}