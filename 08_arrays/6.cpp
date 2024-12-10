#include<iostream>
using namespace std;

// REVERSE AN ARRAY
void reverseArray(int arr[],int size){
    int start=0,end =size-1;

    while(start <= end){// = will apply when number of element of array is odd;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main(){

    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/4;
    reverseArray(arr,size);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   
    return 0;
}