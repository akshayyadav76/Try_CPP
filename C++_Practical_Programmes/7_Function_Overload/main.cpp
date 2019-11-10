#include<iostream>
#include<string>

class Overload{
    //function overloading
    public:
    void print(int a){
       std::cout<<"int function value: "<<a<<std::endl;
        }
        
    void print(double b){
       std::cout<<"double function value: "<<b<<std::endl;
        }
        
    void print(std::string c){
       std::cout<<"string function value: "<<c<<std::endl;
        }
        
    
    };


int main(){
    Overload load;
    load.print(786);
    load.print(2.0);
    load.print("hell out of it....\n");
   
    return 0;
    
    }
