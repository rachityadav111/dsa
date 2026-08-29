#include<iostream>
using namespace std;
void printsub(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int z=i;z<=j;z++){
                    cout<<" "<<arr[z];
                }
                cout<<endl;
            }
        }
}
int main(){
    int n;
    cin>>n;
    cout<<"enter array elements";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printsub(arr,n);
}