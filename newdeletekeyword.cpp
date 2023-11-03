#include<iostream>
using namespace std;
int main(){
    int *p =new int (5);
    cout<<"The address at p is "<<*(p)<<endl;
    int *arr = new int[3];
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
    
    cout<<"The value of first element is "<<arr[0]<<endl;
}