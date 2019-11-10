#include<iostream>

using namespace std;
int main(){
    
    
  /* int prime;
   std::cout<<"enter number \n";
   std::cin>>prime;
   if(prime%2==0){
       std::cout<<prime<<" Number is prime\n";
       }else{
           std::cout<<prime<<" Not a prime number\n";
           }
*/   

int value{0};
 char ans;
do
{
   cout<<"enter the number\n";
   cin>>value;
    
   int op=value%2;
   if(op==0)
       {
           cout<<value<<"  is a even number\n"<<endl; 
       }
    else
    {  
     cout<<value<<"  is odd number\n";  
     
    } 

     cout<<"do you want to continue say y or n\n";
     cin>>ans;    
}
while(ans=='y'||ans=='Y');  

    return 0;
    
    }
