#include<iostream>
using namespace std;
void fn(int arr[],int n){
    int p[n];
    int ni[n];
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            p[a]=arr[i];
            a++;
        }
        else {
                ni[b]=arr[i];
                b++;
            }
    }
    int c=0,d=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(c<a){
                arr[i]=p[c];
                c++;
            }
            else {
                arr[i]=ni[d];
                d++;
            }
        }
        else {
            if(d<b){
            arr[i]=ni[d];
            d++;
            }
            else{
                arr[i]=p[c];
                c++;
            }
        }
    }
}
void trv(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
 int arr[]={10,20,-30,40,50,-60,-66,-80};
 int n=sizeof(arr)/sizeof(arr[0]);
 trv(arr,n);
 fn(arr,n);
 trv(arr,n);
 return 0;   
}