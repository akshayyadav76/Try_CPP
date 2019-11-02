/*  Potential Pointer Pitfalls

           ********Uninitialized Pointers********** 
          
           *  int * int_Ptr;   // pointing anywhere
           *  *int_ptr = 100;   //hopefully  a crash
           * 
           * uninitialize pointer contain garbage means they could point anywhere if we try access or modify the data they pointing to we could 
           * run into same major problems
           * the pointer might be pointing to in a very important area in memory and we could wipe it out
        
           ********Dangling Pointers**********
         Pointer that points to released memeory  
          * example 2 pointers points the same data 
          * first free the memeory with delete 
          * second still access released memory 
      
       
           *********Not checking if new failed ***********
           * if new fails an exception is thrown
           * we can use exception handling to catch exception
      
           *******Leaking memory**********
            * forget to release allocated  memeory wtih delete 
            *  there no way to get back 
            * it will create memeory leak
            * if you leak a lot of memeory in future you will out of heap memroy 
            
            
             
            *  now C++11 have smart pointers that can handle most of the problems 
 
 */ 


#include<iostream>

int main(){
    
    std::cout <<" hello world.... \n";
    return 0;
    
    }
