#include<iostream>

using namespace std;

int main(){
    
     /**********************************
      Character type
     * ********************************/
    char middle_iniatiliz {'A'} ;// for char used single qoute
    cout<<"my middle inatiliz "<<middle_iniatiliz<<endl;
    
     /**********************************
         Integer types
     *********************************/
     
    unsigned short int exam_marks {55};     // same as unsigned short exam_marks {55};
    cout<<"my exam score was "<<exam_marks<<endl;
    
    int conteriesRepresented {65};
    cout<<"there are "<<conteriesRepresented<<" conteries respresented\n";
    
    long peopleInBhopal {20610000};
    cout<<"there are about "<<peopleInBhopal<< " peoples in bhopal"<<endl;
    
    // long peopleOnEarth =7'600'000'000;          // not an error but value will be nagative
   //long peopleOnEarth {7'600'000'000}            // error detact by { } curly braces that way we use it  
   long long peopleOnEarth {7'600'000'000};      // In C++14 standards you can use (7'6) number saperater 
    cout<<"there are about "<<peopleOnEarth<<" peoples on earth\n";
    
    long long distanceToAlphaCentauri {9'345'000'000'000};
    cout<<"diatan to alpha centauri is "<<distanceToAlphaCentauri<<endl;
    
         /**********************************
         Floting point types
         *********************************/
       float carPayment {445.65};
       cout<<"my car payment is "<<carPayment<<endl; 
     
     double pi {3.14159};
     cout<<"Pi value is "<<pi<<endl; 
     
     long double bigNumber {2.3e120};
     cout<<bigNumber<<" it is vary big number\n";
     
         /**********************************
         Boolean type
         *********************************/
         bool gameOver {true};
         cout<<"your game is over "<<gameOver<<endl;
         
        /**********************************
          Overflow type
         *********************************/
         short value1 {30000};
         short value2 {1000};
         short product {value1 * value2};
     cout<<product<<endl; 
         return 0;
    
    }
