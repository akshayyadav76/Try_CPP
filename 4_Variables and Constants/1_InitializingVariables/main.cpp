 /*   what is variable?
       * A variable is an abstraction of a memory location
       * Allow programer to use a meaningful names and not memory address

 */

#include<iostream>
using namespace std;
int number {40}; //globle variable have defalut value of 0
int main(){
    
    //int age;  //uninitializ variable
    
    //theres three way to initializ a varible in c++
    /*
          * age = 21;      // C- like initalization
          * int  age  (21);       // Constructor initalization                     age (21);    it is wrong way to do it 
          * int age   {21};      // C++11  list inialization syntex             age {21};   it is wrong way to do it 
     */
     
    int roomWidth {0};  //local variables 
    int roomLength {0};  //local variables 
    
    cout<<"enter room width\n";
    cin>>roomWidth;
    
    cout<<"enter room length\n";
    cin>>roomLength;
    
    cout<<"area of room is "<<roomLength*roomWidth<<endl;
    cout<<number<<endl;
    
    return 0;
    
    }
