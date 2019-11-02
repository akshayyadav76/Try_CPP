/*
 * dynamic memory allocation in c++
 * int *ptr {nullptr};
  * ptr = new int   // allocating an int onto heap   
  *  ptr = new int[n] //allocation n number of int on heap 
 * 
 * there are three keyword  for dynamic memory allocation in c
 * 1.malloc 2. calloc 3. relock 
 * 
 * but  there are two keyword for dynamic memeoy allocation in c++
 * 1. new 2. delete 3. 
 */



#include<iostream>

using namespace std;
int main(){

    int *int_ptr {nullptr};
    cout<<int_ptr<<endl;
    int_ptr = new int ;
    
    cout<<int_ptr<<endl;  //new int address
    cout<<&int_ptr<<endl;  // int_ptr own address on memory
    cout<<*int_ptr<<endl;   // garbage value 
    
    delete int_ptr;
     cout<<int_ptr<<endl; // yup you can accesss the address of int_ptr after delete operation.....delete just free the assgine memeoy 
     
     size_t size {0};
     double *value{nullptr};
     cout<< "enter the value of heap "<<endl;
     cin>>size;
     
    // while(true)                              <------- it will  allocate memory in heap that it will outoff memory and create exception   
      value = new double[size];
     cout<<value<<endl;
     delete [] value;
    
    return 0;
    
    }
