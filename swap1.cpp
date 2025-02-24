#include<iostream>
using namespace std;
int main(){
    int a=9;
    int b=8;
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}