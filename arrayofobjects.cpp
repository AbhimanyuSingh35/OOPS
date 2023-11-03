#include<iostream>
using namespace std ;
 class shop{
    int id;
     float price ;
    public :
    void setData (int a , float b){
        id=a;
        price=b;
    }
    void getData(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
 };
int main(){
    shop *ptr = new shop[3];
    int p;
    float q;
    shop *tempptr = ptr;
    for(int i=0;i<3;i++){
        cout<<"Enter id and price of item "<<(i+1)<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(int j=0;j<3;j++){
        cout<<"Item number:"<<(j+1)<<endl;
        tempptr->getData();
        tempptr++;
    }

}