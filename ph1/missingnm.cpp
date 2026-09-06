#include<iostream>
using namespace std;
int fn(int arr[],int n){
    int e=n*(n+1)/2;
    int a=0;
    for (int i=0;i<n-1;i++){
        a +=arr[i];
        cout<<" "<<arr[i];
    }
    cout<< endl;
    return e-a;
}
int main(){
    int arr[10]={1,2,3,5,6,7};
    int n=7;
    cout<<"missing number is : "<<fn(arr,n);

}