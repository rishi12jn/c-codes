#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=0;j<=n-1;j++){
            min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
