#include<iostream>
using namespace std;
int findUnique(int arr[], int n){
    int unique =0;
    for(int i=0; i<n;i++){
        unique^=arr[i];
    }
    return unique ;

}
int main(){
    int arr[]={1,2,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the unique element is : "<<findUnique(arr ,n )<<endl;
    return  0;
}

