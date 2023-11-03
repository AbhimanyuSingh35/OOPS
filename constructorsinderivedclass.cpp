#include<iostream>
using namespace std;
/*
class B, public A {
case 1:
constructor of A will be called first 
};
case 2:
class A : public B ,public C{
    order of execution: B construct -> C constructor -> A constructor 
}
*/
class base1{
    protected:
    int data1;
    public:
    base1(int i){
        data1 =i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printData(void){
        cout<<"The value of data is "<<data1<<endl;
    }
};
class base2{
     protected:
    int data2;
    public:
    base2(int i){
        data2 =i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printData(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
class Derived : public base1 , public base2 {
    protected:
    int derived1 ,derived2 ;
    public :
    Derived(int a , int b , int c ,int d) : base1(a) , base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived constructor is called "<<endl;
    }
    void print_data(){

        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }

};
int main(){
     Derived Harry(1,2,3,4);
     Harry.print_data();
   
    return 0;
}