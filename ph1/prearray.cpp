#include<iostream>
using namespace std;
int rangesum(int arr[],int l,int r){
        if(l==0) return r;
        return arr[r]-arr[l-1];
}
void prefix(int arr[],int n){
    for (int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
}
void tr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int n,f,t;
    cin >>n;
    int arr[n];
    cout<<"enter elements";
    for (int i=0;i<n;i++){
            cin>>arr[i];
    }
    tr(arr,n);
    prefix(arr,n);
    tr(arr,n);
    cout<<"enter range sm from anf to";
    cin>>f>>t;
    cout<<rangesum(arr,f,t);
}