#include<iostream> // Linker find iostream in library


extern int x;   //Linker can not find x from librarys

int main(){
    
    std::cout <<" hello world.... \n";
    std:: cout <<x;
    return 0;
    
    }
