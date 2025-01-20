#include<iostream>
using namespace std;
                    //---------------insersion Sort -------------------------------!
void insersionSort(int arr[],int n){      //-----------O(n^2)
   for(int i=1;i<n;i++){
    int curr =arr[i];
    int prev=i-1;

    while(prev >=0 && arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr; // placing the curr elm in its correct position
   }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,1,5,2,3};
    insersionSort(arr,5);
    printArray(arr,5);
    return 0;
}