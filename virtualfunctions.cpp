#include<iostream>
using namespace std;

class Base {
    
    public:
    int var_base;
    virtual void display(){
        cout<<"1 display the variable base "<<var_base<<endl;

    }

};

class Derived : public Base  {
    int var_derived;
    public:
    void display(){
      cout<<"2 displaying the variable base "<<var_base<<endl;
      cout<<"2 displaying the derived variable"<<var_derived;
    }
};

int main(){
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer=&obj_derived;
    base_class_pointer->display();

}