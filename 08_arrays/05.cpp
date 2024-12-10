#include<iostream>
using namespace std;
// Find the index of target element 
int findIndex(int arr[],int size,int target){ 
    for(int i=0;i<size;i++){
        if(arr[i] == target){// FOUND TARGET INDEX
            return i;
        }
    }
    return -1; //NOT FOUND INDEX
}
 
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/4;
    int target=90;
    cout<<"Index of target : "<<findIndex(arr,size,target);
   
    return 0;
}