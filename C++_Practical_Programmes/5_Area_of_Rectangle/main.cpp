#include<iostream>

using namespace std;
class Ractangle{
private:
    int length;
    int width;
    
public:

     void setdata(){
         cout<<"enter the length of rectangle \n";
         cin>>length;
         cout<<"enter the width of rectangle \n";
         cin>>width;
          
     }
//         void getdata(){
//             cout<<"length "<<length;
//             cout<<"width "<<width;
//             
//             }
             
             int calculate(){
                 return length * width;
                 }
      
    };


int main(){
 
    Ractangle obj;
    obj.setdata();
    int result=obj.calculate();
    cout<<result<<endl;
   
    return 0;
    
    }
