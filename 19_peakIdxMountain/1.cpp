#include<iostream>
using namespace std;
#include<vector>
int peakIndexInMountainArray(vector<int>& arr) {
        int st=1,end=arr.size()-2;

        while(st<=end){
            int mid =st+(end-st)/2;                          // error 
            if(arr[mid-1]< arr[mid] && arr[mid]>arr[mid+1]){ //arr[mid-1]< arr[mid] >arr[mid+1]
                return mid;
            }

            if(arr[mid-1] < arr[mid]){// Increasing line par h (Search in Right)
                st=mid+1;
            }else{ // Decreasing line par h (Search in left)
                end=mid-1;
            }
        }
        return -1;
    }
int main(){
    vector<int> nums={0,3,8,9,5,2};
    cout<<"Answer at index : "<<peakIndexInMountainArray(nums);
    return 0;
}