#include <iostream>
using namespace std;
int main(){
    int arr[10]={23,122,41,67};
    cout<<"address of memory block is: "<<arr<<endl;

    cout<<"address of memory block is: "<<&arr[0]<<endl;

    cout<<"4TH "<<*arr<<endl;

    int i=3;
    cout<< i[arr]<<endl;

}