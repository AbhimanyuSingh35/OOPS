#include<iostream>
using namespace std;
/*
syntax:
contructor(arguement-list) : initialization section
{
    assignment + other code 
}
*/
class Test {
    int  a;
    int b;
    public:
    Test(int i,int j) : a(i) , b(2 * j) //initialization list
    {
        cout<<"The constructor was executed and invoked "<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main(){
    Test test(1 ,2 );
    
}