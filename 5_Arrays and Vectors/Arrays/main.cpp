/* intilization of array 
     some way you can define and assgine array in c++
      
      * int test_array [5]     {33,55,44,66,23} ;            // array size of 5 every index have the value of {33,55,44,66,23} respectfully
     *  int test_array2 [6]     {34,67}  ;                      // index 1 or 2 will be assigned 34 and 67 after rest of them will  assgine 0
     * const year {365};    int test array3 [year] {0};    //init all to zero
     *  int test_array4 [] {23,56,87,44};                     //size automatically calculated 
 
*/

#include<iostream>
using namespace std;
int main(){
    
    char words [] {'a','i','r','w'};
    
    cout<<"index 2: "<<words[2]<<endl;
    cout<<"index 3: "<< words[3]<<endl;
    
    
    double pi [] {34.45,66.2,86.9};
    
    cout<<"index of 2: "<<pi[2]<<endl;
    pi[2]=55.5;
    cout<<"index of 2: "<<pi[2]<<endl;
    
    
    int number_array [3] {23,56};                     // always initilaiz your array in c++ otherwise it will give yoy junk value or any value
          
          cout<<"index of 0: "<<number_array[0]<<endl;
          cout<<"index of 1: "<<number_array[1]<<endl;
          cout<<"index of 2: "<<number_array[2]<<endl;

            int cin_array [5] {23,56};                    
          
          cout<<"inter your 5 subject marks  "<<endl;
             cin>>cin_array[0];
             cin>>cin_array[1];
             cin>>cin_array[2];
             cin>>cin_array[3];
             cin>>cin_array[4];
        
        cout<<"index of 0: "<<cin_array[0]<<endl;
        cout<<"index of 1: "<<cin_array[1]<<endl;
        cout<<"index of 2: "<<cin_array[2]<<endl;
        cout<<"index of 3: "<<cin_array[3]<<endl;
        cout<<"index of 4: "<<cin_array[4]<<endl;
       cout<<"memory addresss of cin_array in ram "<<cin_array<<endl;
          
          
          /**********************Multidimensional Arrays***********************************/
          
          const int row {3};
          const int col   {4};
          
          int table[row][col]
          
          { 
             {3,4,5,6},
             {5,99,7,2},
             {6,9,4,7}
          };
          
        cout<<"row 1 col 1 : "<<table[1][1]<<endl;      //99

    return 0;
    
    }
