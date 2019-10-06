/*
     Akshay Carpet Cleaning Service 
     Charges rupess 30 per room
     Sales tax rate is 6%
     Estimates are valid for 30 dayes

    Prompt the user for the number of rooms they would like cleaned and provide an estimate such as:
      
Estimate for carpet cleaning service: 
Number of rooms:2
Price per room: 30 rupess
Cost:60 rupess
Tax:3.6 rupess
============================== 
 
Total estimate: 63.6 rupess
This estimate is valid for 30 days
 
   
Pseudocode:
   Promt the user to enter the number of rooms
    * Display number of rooms 
    * Display price per room
    * 
    * Display cost:(number of rooms*price per room)
    * Display tax: number of rooms * price per room * tax rate
    * diaplay total estimate: (number of rooms *price per room)+ (number of rooms * perice per room * tax rate)

*/


#include<iostream>

using namespace std;
int main(){
    cout<<"Hello Akshay Carpet Cleaning Service \n";
    cout<<"\n How many room you want to clean ";
    
    int rooms {0};
    cin>>rooms;
    const double pricePerRoom {30};
    const double tax{0.06};
    const int expirDate{30};

    cout<< "calculation of " <<rooms <<" is \n";
    cout<<" price per room is  30 rupess \n";
    cout<< " cost: "<<pricePerRoom*rooms<<endl;
    cout<< "tax: "<<rooms*pricePerRoom*tax<<endl;
    
    cout<<"==================== \n";
    cout<< "total estimate is "<<(pricePerRoom*rooms)+(rooms*pricePerRoom*tax)<<endl;
    cout<<"this is valid for "<< expirDate <<" days\n";
    
  
    return 0;
    
    }
