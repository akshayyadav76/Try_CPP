    /*  Namespacd reduce naming conflict
         std  means standars
           
       std::cout means cout is standard librays function  it is not define by user
        * 
        * there are three type we can define namespace
         1 std::cout                                   //explicitly using namespace usefull for larger programs
         2 using namespace std;                // the using namespce dirctive not good for larger programs
         3 using namespace std::cout        //qulified using namespace variant
*/  

#include<iostream>
using namespace std;

namespace first{
    void fun(){
        cout<<"inside first namespace\n";
           }
        }

namespace second{
    void fun(){
        cout<<"inside second namespace\n";
           }
        }

int main(){
    
    first::fun();
    second::fun();
  
    cout <<" hello world.... \n";
    return 0;
    
    }
