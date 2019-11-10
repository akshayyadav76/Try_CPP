#include<iostream>

using namespace std;
class Box{
    
private:
int length,height,width;

public:

 Box(){
    length=0;
    height=0;
    width=0;
    }  
    
    ~Box(){
        cout<<" object destroyed \n";
        }
  
    
int volume(){
    return length*height*width;
    }
    
};
int main(){
    
   Box obj;
  int size=obj.volume();
  cout<<size;
    return 0;
    
    }
