#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    string st="Harry Bhai";
    string st2;
   //opening files through constructors and writing in it 
    ofstream out("sample1.txt");
     //write operation 
    out<<st;
    //opening files through constructors and writing in it 
    ifstream in("sample2.txt");
    //read operation
    getline(in,st2);// st2 mein in ka content daal do 
    cout<<st2;//st2 ko output kra do 

    


}
