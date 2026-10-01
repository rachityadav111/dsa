#include<iostream>
using namespace std;
int stockp(int arr[],int n){
    int maxp=0;
    int min=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
        int p=arr[i]-min;
        if(p>maxp) maxp=p;
}
return maxp;
}
int main(){
    int n=5;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=stockp(arr,n);
    cout<<endl<<"the maximum profit possible is:"<<ans;

}