#include<iostream>

using namespace std;
class abc{
    
private:
    int a=3 ,b=4;
    
    friend void show(abc a);
    
    };

void show(abc a){
int c;
c= a.a;
cout<<c<<" \n";
    }


int main(){
    abc obj;
    show(obj);
 
    return 0;
    
    }
