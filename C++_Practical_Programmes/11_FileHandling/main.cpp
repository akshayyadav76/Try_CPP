#include<iostream>
#include<fstream>

using namespace std;
int main(){
    char arr[100];
    cout<<"write: "<<endl;
    
    cin>>arr;
    ofstream file("result.text");
    file<<arr;
    file.close();
    cout<<"comlete \n\n";
 
 cout<<"read:\n";
    ifstream obj("result.text");
    obj.getline(arr ,100);
    cout<<arr<<endl;
    ,,
    obj.close();
    return 0;
    
    }
