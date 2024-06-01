#include <iostream> 
using namespace std;
int main(){
    
    // int *p=0;
    // cout<<*p<<endl;

    // int i=5;
    // int *ptr=0;
    // ptr=&i;

    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;

    int num=5;
    int a=num;
    a++;
    cout<<num<<endl;

    int *p=&num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;

    int i=3;
    int *t=&i;

    *t=*t+1;
    cout<<*t<<endl;
    cout<<"befor t"<<t<<endl;
    t=t+1;
    cout<<"after t"<<t<<endl;


}