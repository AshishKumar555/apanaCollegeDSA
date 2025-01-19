#include<iostream>
using namespace std;
                    //---------------bubble Sort -------------------------------!
void bubbleSort(int arr[],int n){      //-----------O(n^2)
    for(int i=0;i<n-1;i++){
       bool isSwap=false; // optimisation if sorted (1,2,3,4,5) avoid extra looping

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){ // Array is already sorted-----------
          return ;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,1,5,2,3};
    bubbleSort(arr,5);
    printArray(arr,5);
    return 0;
}