#include<iostream>
using namespace std;
// Find maximum subArray sum -----------------------------------!
int main(){                   // Kadane's Algorithm===================!
    // int arr[]={1,2,3,4,5};
     int arr[]={3,-4,5,4,-1,7,-8};
      int n=sizeof(arr)/sizeof(int);
    int maxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        int currSum=0;
        currSum +=arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout<<"max subArray sum = "<<maxSum<<endl;
    return 0;
}