#include<iostream>
using namespace std;
void sec (int arr[],int brr[],int n,int m){
        int i=0,j=0;
        while(i<n && j<m){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<" ";
                i++;j++;
            }
            else if(arr[i]<brr[j]) i++;
            else j++;
        }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int brr[]={3,4,5,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(arr[0]);
    sec(arr,brr,n,m);
}