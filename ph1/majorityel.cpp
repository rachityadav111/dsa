#include<iostream>
using namespace std;
void mn(int arr[],int n){
    int cn=0,co=0;
    for (int i=0;i<n;i++){
        if (co==0){
            cn=arr[i];
        }
        if(arr[i]==cn) co++;
        else co--;
    }
    cout<<"the maximum or majority candidate is : "<<cn;
}
int main(){
    int arr[]={1,1,12,3,3,13,22,2,2,111,2,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    mn(arr,n);
}