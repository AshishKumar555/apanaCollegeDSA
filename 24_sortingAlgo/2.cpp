#include<iostream>
using namespace std;
                    //---------------Selection Sort -------------------------------!
void selectionSort(int arr[],int n){      //-----------O(n^2)
    
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        int j=0;
        for( j=i+1;j<n;j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,1,5,2,3};
    selectionSort(arr,5);
    printArray(arr,5);
    return 0;
}