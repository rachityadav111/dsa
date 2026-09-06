#include<iostream>
using namespace std;
void az(int arr[],int n){
    int j=0;
    for (int i=0;i<n;i++){
        if (arr[i] != 0){
           arr[j]=arr[i];
           j++; 
        }
    }
        while(j<n){
            arr[j]=0;
            j++;
        }
}
int main(){
    int arr[]={1,3,3,5,7,0,0,0,9,74,572,45,30,0,0,3456,};
    int n=sizeof(arr)/sizeof(arr[0]);
    az(arr,n);
    cout<<"elements after shifting all eros to end : ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}