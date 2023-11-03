#include<iostream>
using namespace std ;
//demonstration of virtual base class 
class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"Your roll no is"<<roll_no<<endl;
    }
};
class Test : virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1 , float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"Your resukt is here"<<endl
            <<"Maths"<<maths<<endl
            <<"Physics"<<physics<<endl;
    }
};
class Sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"Your PT score is here"<<score<<endl;
    }
};

class result : public Test , public Sports{
    private :
    float total;
    public:
    void display(void){
        total=maths+physics +score;
        cout<<"Your total score is "<<total<<endl;
    }
};
int main(){
    result Result;
    Result.set_marks(40,50);
    Result.set_score(99);
    Result.display();
    
}
