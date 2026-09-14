#include<iostream>
using namespace std;
void unionn(int arr[],int brr[],int n,int m){
    int i=0;int j=0;
    while (i<n && j<m){
        if(arr[i]<brr[j]){
            cout<<arr[i]<<" ";
            i++;
    }
        else if(brr[j]<arr[i]){
            cout<<brr[j]<<" ";       
            j++;
    }
    else {
        cout<<arr[i]<<" ";
        i++;j++;
    }
}
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    
    while(j<m){
        cout<<brr[j]<<" ";
        j++;
    }

}
int main(){
    int arr[]={10,20,30,50,70};
    int brr[]={20,30,40,50,60,70,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);
    unionn(arr,brr,n,m);
}