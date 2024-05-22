#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
    char op;
    cout<<"enter operator:"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<(a+b)<<endl;
        break;
        case '-':
        cout<<(a-b)<<endl;
        break;
        case '*':
        cout<<(a*b)<<endl;
        break;
        case '/':
        cout<<(a/b)<<endl;
        break;
        default: cout<<"not a valid operator"<<endl;
    }



}