#include<iostream>
using namespace std;
int sm(int arr[],int brr[],int r[],int n, int m){
    int i=0;
    int j=0;
    int z=0;
    while(i<n && j<m){
        if(arr[i]<brr[j]){
            r[z]=arr[i];
            i++;
        }
        else {
            r[z]=brr[j];
            j++;
        }
        z++;
    }
        while(i<n){
            r[z]=arr[i];
            z++;i++;
        }
        
        while(j<m){
            r[z]=brr[j];
            z++;j++;
        }
    return z;
}
int main(){
    int arr[]={1,3,5,7,9};
    int brr[]={0,2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);
    int r[n+m];
    sm(arr,brr,r,n,m);
    cout<< "so the merged array is : ";
    for (int i=0;i<n+m;i++){
        cout<<r[i]<<"  ";
    }
}