#include<iostream>
using namespace std;
int main(){
    int arr []={1,23,45,67,3,6,27,8,3,7,45,67,99,77,22};
    int n= sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=1;i>n;i++){
        if(min<arr[i])min=arr[i];
    }
    cout<<min;
}