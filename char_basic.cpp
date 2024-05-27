#include <iostream>
using namespace std;

bool checkpalindrome(char a[], int n){
   int s=0;
   int e=n-1;

   while ((s<=2)){
    if(a[s]!=a[e]){
        return 0;
    }
    else{
        s++;
        e--;
    }
   }
   return 1;
}

char tolowercase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
       
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name:"<<endl;
    cin>>name;
    cout<<"yor name is ";
    cout<<name<<endl;
    
    int len=getlength(name);

    cout<<"length is "<<len<<endl;

    reverse(name,len);
    cout<<"yor name is ";
    cout<<name<<endl;

    cout<<"palindrome or not :"<< checkpalindrome(name,len)<<endl;


}