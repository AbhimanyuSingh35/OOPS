#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main(){
    // // Writing in a file
    // ofstream out("sample3.txt");
    // string outContent="My name is Abhimanyu";
    // out<<outContent;
    // out.close();
    // //Reading from a file 
    // ifstream in("sample3.txt");
    // string inContent;
    // getline(in,inContent);
    // cout<<"content in file is "<<inContent<<endl;

    // ofstream out;
    // out.open("sample4.txt");

    // out<<"This is my file"<<endl;
    // out.close();

    ifstream in;
    in.open("sample4.txt");
    string st;
    while(in.eof()!=0){
        getline(in,st);
        cout<<st<<endl;
   }

   in.close();
}
