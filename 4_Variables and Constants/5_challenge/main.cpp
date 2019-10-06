/*
     Akshay Carpet Cleaning Service 
     Charges rupess 30 per room
     Sales tax rate is 6%
     Estimates are valid for 30 dayes

    Prompt the user for the number of rooms they would like cleaned and provide an estimate such as:
      
Estimate for carpet cleaning service: 
Number of small rooms:2
 Number of large rooms:1
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
    cout<<"\n How many small rooms you want to clean ";
    
    int smallRooms {0};
    cin>>smallRooms;
    
    cout<<"\n How many large rooms you want to clean ";
    int largeRooms{0};
    cin>>largeRooms;
    
    const double pricePerSmallRoom {30};
    const double pricePerLargeRoom {60};
    const double tax{0.06};
    const int expirDate{30};

    cout<< "smallRooms " <<smallRooms <<" is \n";
    cout<< "largeRooms " <<largeRooms <<" is \n";
    
    cout<<" price per samll room is  30 rupess \n";
    cout<<" price per large room is  60 rupess \n";
     
     
    cout<< " cost: "<<pricePerSmallRoom*smallRooms<<endl;
    cout<< " cost: "<<pricePerLargeRoom*largeRooms<<endl;

    cout<< "tax: "<<(smallRooms+largeRooms)*(smallRooms+largeRooms)*tax<<endl;
    
    cout<<"==================== \n";
    cout<< "total estimate is "<<(pricePerSmallRoom*smallRooms)+(pricePerLargeRoom*largeRooms)+
    (smallRooms+largeRooms)*(smallRooms+largeRooms)*tax<<endl;
    cout<<"this is valid for "<< expirDate <<" days\n";
    
  
    return 0;
    
    }
