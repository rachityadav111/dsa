#include <iostream>
using namespace std;
void oe(int arr[],int n){
    int o=0,e=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) o++;
        else e++;
    }
    cout<<"odd elements in array"<<e<<endl;
    cout<<"even elements in array"<<o<<endl;
}
void rev(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sl(int arr[],int n){
    int l,s;
    l=arr[0];
    for(int i=0;i<n;i++){
        if(l<arr[i]){
            l=arr[i];
        }
    }
    bool f=true;
    for(int i=0;i<n;i++){
        if(arr[i]<l){
            if(f || s<arr[i]){
                s=arr[i];
                f=false;
            }
        }
    }
    return s;
}
int main(){
    int n=0,r;
    cout<<"enter the nmber of elements ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter ayyar elements";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    oe(arr,n);
    cout<<endl;
    rev(arr,n);
    cout<<endl;
    r=sl(arr,n);
    cout<<"second largest element = "<<r;
}