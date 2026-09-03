#include<iostream>
using namespace std;
void printsbr(int arr[],int n){
    for(int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            for (int z=i;z<=j;z++){
                cout<<arr[z]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[10]={1,2,3,4,5};
    int n=5;
    printsbr(arr,n);
    return 0;
}