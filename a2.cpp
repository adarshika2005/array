#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int x=sizeof(arr)/sizeof(arr[0]);
    cout<<x;
    for(int i=0;i<=x-1;i++){
        cout<<arr[i]<<endl;
    }

}