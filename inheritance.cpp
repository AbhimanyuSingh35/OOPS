#include<iostream>
using namespace std;
//synatx for inheriting multiple inheritance 
// class Derived : visibility-mode base1 , visibility-mode base2{

// };
class base1 {
    protected:
    int baseint1;

    public:
    void set_baseint1(int a){
         baseint1=a;
    }

};

class base2 {
     protected:
    int baseint2;

    public:
    void set_baseint2(int a){
         baseint2=a;
    }
    
};

class Derived : public base1, public base2{
    

    public:
    
    void show(){
        cout<<"The value of baseint1 is "<<baseint1<<endl;
        cout<<"The value of baseint2 is "<<baseint2<<endl;
        cout<<"The value of baseint3 is "<<(baseint1+baseint2)<<endl;

    }
};
int main(){
    Derived abhi;
    abhi.set_baseint1(30);
    abhi.set_baseint2(20);
 
    abhi.show();
}

 

