#include<iostream>
#include<vector>

using namespace std;
int main(){
    
   vector <int>integer1;
   vector<int>integer2;
   
   cout<<" enter two value for integer 1 \n";
//   int a;
//   int b;
//   cin>>a;
//   cin>>b;
   integer1.push_back(10);
   integer1.push_back(20);
   
   cout<<" integer1 index 0 "<<integer1.at(0)<<endl;
   cout<<" integer1 index 1 "<<integer1.at(1)<<endl;
   cout<<" size of integer1 vector "<<integer1.size()<<endl;
   
    vector<vector<int>>twodvector;
    twodvector.push_back(integer1);
    twodvector.push_back(integer2);
    cout<<" 2d vector values "<<twodvector.at(0).at(0)<<endl;
    
    twodvector.at(0).at(0)=1000;
    // integer1.at(0)=1000         // it is not working
       cout<<" 2d vector values "<<twodvector.at(0).at(0)<<endl;
    
    return 0;
    
    }
