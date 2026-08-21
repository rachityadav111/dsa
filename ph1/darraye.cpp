#include<iostream>
using namespace std;
bool exists(int arr[],int n,int v){
    for (int i=0;i<n;i++){
        if(arr[i]==v){
            return true;
        }
    }
    return false;
}
int del(int arr[],int n){
    int r[10];
    int p=0;
    for (int i=0;i<n;i++){
        if(!exists(r,p,arr[i])){
            r[p]=arr[i];
            p++;
        }
    }
    for (int i=0;i<p;i++){
        arr[i]=r[i];
    }
    return p;
}
void tr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={10,20,10,10,20,30,40};
    int n=7;
    n=del(arr,n);
    tr(arr,n);

}