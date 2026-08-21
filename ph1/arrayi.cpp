#include<iostream>
using namespace std;
int beg(int arr[],int &n,int v){
    for (int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=v;
    n++;
    return arr[n];
}
int last(int arr[],int &n,int v){
    arr[n]=v;
    n++;
    return arr[n];
}
int pos(int arr[],int &n,int p,int v){
    for (int i=n;i>p;i--){
        arr[i]=arr[i-1];
    }
    arr[p]=v;
    n++;
    return arr[n];
} 
void trav(int arr[],int &n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={10,20,30,40,50};
    int n=5;
    for (int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    beg(arr,n,1);
    cout<<endl;
    trav(arr,n);
    last(arr,n,60);
    cout<<endl;
    trav(arr,n);
    pos(arr,n,3,35);
    cout<<endl;
    trav(arr,n);
}