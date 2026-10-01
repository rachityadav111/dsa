#include<iostream>
using namespace std;
int lsa(int arr[],int n,int t){
    int l=0,sm=0,ml=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
        sm += arr[j];
        if(sm==t){
            l=j-i+1;
            if(ml<l) ml=l;
        }

        }
    }
    return ml;
}
int main(){
    int n=7;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"enter the array elements";
        cin>>arr[i];
    }
    int t;
    cout<<"enter the target";
    cin>>t;
    int ans=lsa(arr,n,t);
    cout<<"maxlength : "<<ans;
}