#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter your target :";
    cin>>x;
    bool flag =false;//false means absent
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;//true means preent
            break;
        }
    }
    if(flag==true)cout<<x<<"is present";
    else cout<<x<<"is not present ";
}