
// Passing Pointers 1
#include <iostream>

using namespace std;


void double_data(int *int_ptr) {
   *int_ptr *= 2;	        // means *int_ptr=*int_ptr *=2   it will double the content of data the pointer points to 
}

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "-----------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout  << endl;
    return 0;
}