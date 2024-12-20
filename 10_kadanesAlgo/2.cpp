#include<iostream>
using namespace std;
// Find maximum subArray sum -----------------------------------!
int main(){
     int arr[]={1,2,3,4,5};
    //  int arr[]={3,-4,5,4,-1,7,-8};
     int size=sizeof(arr)/sizeof(int);
      cout<<"size of array : "<<size<<endl;
    int n=size;
    int maxSum=INT32_MIN;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum +=arr[end];
            maxSum=max(maxSum,currSum);
        }
    }
    cout<<"max subArray sum = "<<maxSum<<endl;
    return 0;
}