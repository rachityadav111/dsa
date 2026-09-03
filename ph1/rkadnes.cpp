#include<iostream>
using namespace std;
void kedny(int arr[],int n){
    int cr=arr[0];
    int max=arr[0];
    int s=0;
    int e=0;
    int t=0;
    for (int i=1;i<n;i++){
        if (arr[i]>cr+arr[i]){
                cr=arr[i];
                t=i;
        }
        else cr=cr+arr[i];

        if(cr>max){
            max=cr;
            s=t;
            e=i;
        }
    }
    cout<<"sum of maximum elements is  : "<<max<<endl;
    cout<<"maximum sb array : ";
    for (int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={10,-21,432,-123,303,234};
    int n=6;
    kedny(arr,n);
}