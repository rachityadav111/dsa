#include<iostream>
using namespace std;
int kad(int arr[],int n){
    int cr=arr[0];
    int m=arr[0];
    for (int i=0;i<n;i++){
        cr=max(arr[i],cr+arr[i]);
        m=max(arr[i],cr);
        cout<<cr<<"         "<<endl;
}
cout<<"now we are gonna have our final output : ";
return m;
}
int main(){
    int arr[]={10,-20,-30,40,50};
    int n=5;
    int o=kad(arr,n);
    cout <<o;
    return 0;
}