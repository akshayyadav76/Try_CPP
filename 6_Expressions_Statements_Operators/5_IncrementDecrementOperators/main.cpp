
/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix      num++
    
    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/

#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
     
cout<< "**** Example 1 - simple increment ****"<<endl;
    cout << "Counter : " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
  
    counter++;
    cout << "Counter : " << counter << endl;

    ++counter; 
    cout << "Counter : " << counter << endl;
    

cout<<" **** Example 2 - preincrement ****\n";
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl; //10
    
    result = ++counter; // Note the pre increment  means => result = counter +1 then result = counter  
    cout << "Counter : " << counter << endl;//11
    cout << "Result : " << result << endl; //11

 cout<<"**** Example 3 - post-increment ****\n";
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;  //10
    
    result = counter++; // Note the post increment  means => result = counter then counter = counter +1
    cout << "Counter : " << counter << endl; //11
    cout << "Result : " << result << endl;       //10

 cout<<" *** Example 4 ***\n";
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = ++counter + 10;  // Note the pre increment
        
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

 cout<<"*** Example 5 ***\n";
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = counter++ + 10;  // Note the post increment
        
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << endl;
    return 0;
}