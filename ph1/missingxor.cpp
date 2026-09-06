#include<iostream>
using namespace std;
void mn(int arr[],int n){
    int ans=0;
    for (int i=1;i<=n;i++){
        ans=ans^i;
    }
    for (int i=0;i<n-1;i++){
        ans=ans^arr[i];
    }
    cout<<"so mf usnig xor we got the fucking answer and our missing number is : "<<ans;
}
int main(){
    int arr[10]={1,2,3,5,6,7};
    int n=7;
    mn(arr,n);
}