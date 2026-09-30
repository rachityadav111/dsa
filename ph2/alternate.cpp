#include <iostream>
using namespace std;
void posneg(int arr[],int n){
     int p[n];
     int neg[n];
     int a=0,b=0;
     for(int i=0;i<n;i++){
        if(arr[i]>0){
            p[a]=arr[i];
            a++;
        }
        else{
            neg[b]=arr[i];
            b++;
        }
     }
     int c=0,d=0;
     for (int i=0;i<n;i++){
        if(i%2==0){
            if(c<a){
            arr[i]=p[c];
            c++;
        }
        else {
            arr[i]=neg[d];
            d++;
    }
     }
     else{
        if(d<b){
            arr[i]=neg[d];
            d++;
        }
        else{
            arr[i]=p[c];
            c++;
        }
     }
}
}
int main(){
    int n;
    cout<<"enter the nmber of elements for and array";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    posneg(arr,n);
    cout<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}