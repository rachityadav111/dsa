#include<iostream>
using namespace std;
void ssarray(int arr[],int n){
    int sm=0;
    for(int i=0;i<n;i++){
        for (int j=i;j<n;j++){
             sm += arr[j];
            cout<<"sUbarray";
            for (int z=i;z<=j;z++){
                cout<<arr[z]<<" ";
            }
            cout<<"sum of sbarray "<<sm<<endl;
        }
    }
}
int main(){
    int arr[10]={10,20,30,40};
    int n=4;
    ssarray(arr,n);
}    