
/* Vector or  dynamic array or       -- in my words list in dart --
  
   * vector is a  container in c++ Standard Template Library(this the library with Containers,Algorithums,Functions,Iterables) 
   * vector is a C++ object and if it is a object that means we can perform some function on it 
   * like  --index out bound check--  || --size check-- || --dynamically size change-- etc....    
*/

#include<iostream>
#include<vector> // add this to use Vector 
using namespace std;
int main(){
  
   //vector <char> words;             //empty
   //vector <char>words (5);        //size of 5 with initilize all 0
  vector<char>words {'d','s','t','a','p'};
  
  
  //vector <int>num(3);          //size of 3
  // vector <int>num(3,100)    //size of 3 all initiliz with 100
  
  vector<int>num{33,66,56};
  cout<<"*****result using array syntex******"<<endl;
  cout<<"index 0: "<<num[0]<<endl;
  cout<<"index 1: "<<num[1]<<endl;
  cout<<"index 2: "<<num[2]<<endl;
   cout<<"index 2: "<<num[3]<<endl;
  

  cout<<"***** result using Vector syntex ******"<<endl;
  cout<<"index 0: "<<num.at(0)<<endl;
  cout<<"index 1: "<<num.at(1)<<endl;
  cout<<"index 2: "<<num.at(2)<<endl;
  // cout<<"index 3: "<<num.at(3)<<endl; //this not valid the size of vector is 3(0,1,2) so 3 is invalid with the help of num.at(3)
 // function we can see run time error that is vector out bound index in array it is not possible...
 
 cout<<"****** enter new value for vector *****"<<endl;
 cin>>num.at(0);
 cin>>num.at(1);
 cin>>num.at(2);

  cout<<"****** update values of vector ******"<<endl;
     cout<<"index 0: "<<num.at(0)<<endl;
     cout<<"index 1: "<<num.at(1)<<endl;
     cout<<"index 2: "<<num.at(2)<<endl;
     
     
     
     int input {0};
     int input2(0);
     cout<<"enter 4th 5th value of num "<<endl;
     cin>>input;
     cin>>input2;
     
     num.push_back(input);
     num.push_back(input2);
     
     
      cout<<"****** dynamically changed num vactor size 3 to 5 new values is  ******"<<endl;
     cout<<"index 0: "<<num.at(0)<<endl;
     cout<<"index 1: "<<num.at(1)<<endl;
     cout<<"index 2: "<<num.at(2)<<endl;
      cout<<"index 3: "<<num.at(3)<<endl;
       cout<<"index 4: "<<num.at(4)<<endl;
       
       cout<<"the size of num vactor now is : "<<num.size()<<endl;
     
     
     //***************************2d Vector*************************//
          
         vector <vector <int>> table
          
          { 
             {100,400},
             {200,500},
   
          };
          cout<<"2d Vactor as array sysntex "<<endl;
          cout<<"row 0 col 0 : "<<table[0][0]<<endl;      
          cout<<"row 1 col 1 : "<<table[1][1]<<endl;   
          
          cout<<"2d Vactor as vactor sysntex "<<endl;
          cout<<"row 0 col 0 : "<<table.at(0).at(0)<<endl;      
          cout<<"row 1 col 1 : "<<table.at(1).at(1)<<endl;   
    return 0;
    
    }
